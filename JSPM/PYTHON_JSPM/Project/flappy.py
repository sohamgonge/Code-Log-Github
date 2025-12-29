import random # For generating random number
import sys # we will use sys.exit to exit the game
import pygame 
from pygame.locals import *
import os

# Global Variables for the game

FPS = 60
SCREENWIDTH = 289
SCREENHEIGHT= 511
# Creaters a display surface (Initialising Screen for display)
SCREEN = pygame.display.set_mode((SCREENWIDTH, SCREENHEIGHT))
GROUNDY = SCREENHEIGHT*0.8
GAME_SPRITES = {}#IMAGES DICTIONARY
GAME_SOUND ={}
BASE_DIR = os.path.dirname(__file__)
PLAYER = os.path.join(BASE_DIR, "gallery", "sprites", "bird.png")
BACKGROUND = os.path.join(BASE_DIR, "gallery", "sprites", "background.png")
PIPE = os.path.join(BASE_DIR, "gallery", "sprites", "pipe.png")

def welcomeScreen():
    '''
    Shows welcome images on screen 
    '''
    playerx=int(SCREENWIDTH/5)
    playery=int((SCREENHEIGHT-GAME_SPRITES["player"].get_height())/2)
    messagex = int((SCREENWIDTH - GAME_SPRITES["message"].get_width()) / 2)
    messagey = int(SCREENHEIGHT*0.13)
    basex=0
    while True:
        for event in pygame.event.get():# Records all the things what we do, like pressing a key or clicking somewhere
            #If user clicks on cross button, close the game
            if event.type==QUIT or (event.type==KEYDOWN and event.key == K_ESCAPE):
                pygame.quit()
                sys.exit()

            # If the user presses space or up key, start the game for them
            elif event.type==KEYDOWN and (event.key==K_SPACE or event.key == K_UP):
                return
            else:
                SCREEN.blit(GAME_SPRITES['background'],(0,0))
                SCREEN.blit(GAME_SPRITES['player'],(playerx,playery))
                SCREEN.blit(GAME_SPRITES['message'],(messagex, messagey))
                SCREEN.blit(GAME_SPRITES['base'],(basex,GROUNDY))
                pygame.display.update() # won't blit unless and unti we use pygame.display.update function
                FPSCLOCK.tick(FPS)#Locks the max noof FPS 

def mainGame():
    score = 0
    playerx = int(SCREENWIDTH/5)
    playery = int(SCREENWIDTH/2)
    basex = 0

    # Create 2 pipes for blittign on the screen 
    newPipe1 = getRandomPipe()
    newPipe2 = getRandomPipe()

    #my list of upper pipes
    upperPipes = [
        {'x': SCREENWIDTH + 200, 'y': newPipe1[0]['y']},
        {'x': SCREENWIDTH + 200 + (SCREENWIDTH / 2), 'y': newPipe2[0]['y']}
    ]

    #mylists of lower pipes
    lowerPipes = [
        {'x': SCREENWIDTH + 200, 'y': newPipe1[1]['y']},
        {'x': SCREENWIDTH + 200 + (SCREENWIDTH / 2), 'y': newPipe2[1]['y']}
    ]

    pipeVelX=-4

    playerVelY=-9
    playerMaxVelY = 10
    playerMinVelY=-8
    playerAccY = 1

    playerFlapAccv = -8 # Velocity while flapping
    playerFlapped = False # It is true only when the bird is flapping 

    while True:
        for event in pygame.event.get():
            if event.type == QUIT or (event.type == KEYDOWN and event.key ==K_ESCAPE):
                pygame.quit()
                sys.exit()
            if event.type == KEYDOWN and (event.key == K_SPACE or event.key == K_UP):
                if playery >0:
                    playerVelY = playerFlapAccv
                    playerFlapped = True
                    GAME_SOUND['wing'].play()
        crashTest = isCollide(playerx, playery, upperPipes, lowerPipes)#This function will return true if the player is crashed
        if crashTest:
            return
        
        #check for score
        playerMidPos = playerx + GAME_SPRITES['player'].get_width()/2
        for pipe in upperPipes:
            pipeMidPos = pipe['x'] + GAME_SPRITES['pipe'][0].get_width()/2    
            if pipeMidPos <= playerMidPos<pipeMidPos+4:
                score+=1
                print(f"your score is {score}")
                GAME_SOUND['point'].play()
        
        if playerVelY < playerMaxVelY and not playerFlapped:
            playerVelY+=playerAccY

        if playerFlapped:
            playerFlapped= False
        playerHeight = GAME_SPRITES['player'].get_height()
        playery = playery +min(playerVelY, GROUNDY - playery - playerHeight)

        # move pipes to the left
        for upperPipe, lowerPipe in zip(upperPipes, lowerPipes):
            upperPipe['x'] += pipeVelX
            lowerPipe['x'] += pipeVelX

        # Add a new pipe when the first pipe is about to cross the lefrtmost part of the screen
        if 0<upperPipes[0]['x']<5:
            newpipe = getRandomPipe()        
            upperPipes.append(newpipe[0])
            lowerPipes.append(newpipe[1])

        # if the piep is out of the screen, remove it
        if upperPipes[0]['x'] < -GAME_SPRITES['pipe'][0].get_width():
            upperPipes.pop(0)
            lowerPipes.pop(0)

        #lets blit  our sprits now
        SCREEN.blit(GAME_SPRITES['background'],(0,0))
        for upperPipe, lowerPipe in zip(upperPipes, lowerPipes):
            SCREEN.blit(GAME_SPRITES['pipe'][0],(upperPipe['x'],upperPipe['y']))
            SCREEN.blit(GAME_SPRITES['pipe'][1],(lowerPipe['x'],lowerPipe['y']))


        SCREEN.blit(GAME_SPRITES['base'],(basex,GROUNDY))
        SCREEN.blit(GAME_SPRITES['player'],(playerx,playery))
        myDigits = [int(x) for x in list(str(score))]
        width = 0
        for digit in myDigits:
            width +=GAME_SPRITES['numbers'][digit].get_width()
        Xoffset = (SCREENWIDTH-width)/2

        for digit in myDigits:
            SCREEN.blit(GAME_SPRITES['numbers'][digit],(Xoffset,SCREENHEIGHT*0.12))
            Xoffset+=GAME_SPRITES['numbers'][digit].get_width()
        pygame.display.update()
        FPSCLOCK.tick(FPS)

def isCollide(playerx, playery, upperPipes, lowerPipes):
    if playery>GROUNDY - 25 or playery<0:
        GAME_SOUND['hit'].play()
        return True
    for pipe in upperPipes:
        pipeHeight = GAME_SPRITES['pipe'][0].get_height()
        if(playery< pipeHeight + pipe['y'] and abs(playerx - pipe['x']) < GAME_SPRITES['pipe'][0].get_width()):
            GAME_SOUND['hit'].play()
            return True
    for pipe in lowerPipes:
        if ((playery + GAME_SPRITES['player'].get_height() > pipe['y']) and abs(playerx - pipe['x'])<GAME_SPRITES['pipe'][0].get_width()):
            GAME_SOUND['hit'].play()
            return True


    return False
def getRandomPipe():
    '''
    Generate possitions of two pipes for blitting on the screen (one bottom and other inverted one)
    '''
    pipeheight = GAME_SPRITES['pipe'][0].get_height()
    offset = SCREENHEIGHT/3
    y2 = offset + random.randrange(0, int(SCREENHEIGHT-GAME_SPRITES['base'].get_height()-1.2*offset))
    pipeX = SCREENWIDTH + 10
    y1 = pipeheight - y2 + offset
    pipe = [
        {'x': pipeX, 'y':-y1},# upper Pipe
        {'x': pipeX, 'y':y2}# Lower Pipe
    ]
    return pipe
if __name__ == "__main__":
    # This will be the main point from where out game will start 
    pygame.init()#Initialize all pygame's modules
    FPSCLOCK = pygame.time.Clock()# controls fps
    pygame.display.set_caption('Mini Project')
    GAME_SPRITES['numbers'] = (
        #conver_alpha()will optimize the image for the game
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "0.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "1.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "2.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "3.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "4.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "5.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "6.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "7.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "8.png")).convert_alpha(),
        pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "9.png")).convert_alpha(),
    )

    GAME_SPRITES['message'] = pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "message.png")).convert_alpha()
    GAME_SPRITES['base'] = pygame.image.load(os.path.join(BASE_DIR, "gallery", "sprites", "base.png")).convert_alpha()


    GAME_SPRITES['pipe'] = (
        
        pygame.transform.rotate(pygame.image.load(PIPE).convert_alpha(),180),
        pygame.image.load(PIPE).convert_alpha()
    )

    GAME_SPRITES['background'] = pygame.image.load(BACKGROUND).convert()
    GAME_SPRITES['player'] = pygame.image.load(PLAYER).convert_alpha()

    #Game Sounds
    GAME_SOUND['die'] = pygame.mixer.Sound(os.path.join(BASE_DIR, "gallery", "audio", "die.wav"))
    GAME_SOUND['hit'] = pygame.mixer.Sound(os.path.join(BASE_DIR, "gallery", "audio", "hit.wav"))
    GAME_SOUND['point'] = pygame.mixer.Sound(os.path.join(BASE_DIR, "gallery", "audio", "point.wav"))
    GAME_SOUND['swoosh'] = pygame.mixer.Sound(os.path.join(BASE_DIR, "gallery", "audio", "swoosh.wav"))
    GAME_SOUND['wing'] = pygame.mixer.Sound(os.path.join(BASE_DIR, "gallery", "audio", "wing.wav"))

    while True:
        welcomeScreen()#Shows welcome screen to the user until he presses a button
        mainGame()#This is the main game function