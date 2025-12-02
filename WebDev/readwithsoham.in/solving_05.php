<?php
session_start();

include("connection.php");
include("functions.php");

// Check if the user is logged in
$is_logged_in = isset($_SESSION['user_id']);

// If logged in, get user data
if ($is_logged_in) {
    $user_data = check_login($con);
}
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Initialize $comments variable
$comments = [];

// Handle comment submission
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["comment_content"])) {
    $user_id = $_SESSION['user_id'];
    $user_name = $_SESSION['user_name'];
    $content = $_POST['comment_content'];
    $article_title = "solving_05"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_05.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_05"; // Replace with actual article title
if (isset($_GET['article_title'])) {
    $article_title = $_GET['article_title'];
}
$comments = get_comments($con, $article_title);

?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="Summary of the book 'Solving the Procrastination Puzzle' by Dr. Timothy A. Pychyl. Learn strategies to overcome procrastination and improve productivity.">
    <meta name="keywords" content="procrastination, productivity, self-improvement, book summary, Timothy Pychyl">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- Google Adsense -->
    <meta name="google-adsense-account" content="ca-pub-8460003539634035">
    <script async src="https://www.googletagmanager.com/gtag/js?id=G-DLVPT1XN4X"></script>
    <script>
        window.dataLayer = window.dataLayer || [];

        function gtag() {
            dataLayer.push(arguments);
        }
        gtag('js', new Date());

        gtag('config', 'G-DLVPT1XN4X');
    </script>
    <!-- Adsense -->
    <script async src="https://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js?client=ca-pub-8460003539634035" crossorigin="anonymous"></script>

    <!-- Page Title -->
    <title>ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">
    <link rel="stylesheet" href="solving.css
    ">
    <link rel="stylesheet" href="pagelinks.css">
    <link rel="stylesheet" href="comments.css">
    <link rel="stylesheet" href="para-head.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://readwithsoham.in/solving_03.php">
</head>

<body>
    <header class="container">
        <div class="page-header">
            <div class="logo">
                <a href="index.php">
                    <img id="logo" class="logo-img" style="height: 2.5rem;" src="logo.png" alt="Readwith Soham Logo">
                </a>
            </div>
            <input type="checkbox" id="click">
            <label for="click" class="mainicon">
                <div class="menu">
                    <i class='bx bx-menu'></i>
                </div>
            </label>
            <ul>
                <li><a href="index.php" class="active" style="--navAni:1">Home</a></li>
                <li><a href="about.php" style="--navAni:2">About</a></li>
                <li><a href="library.php" style="--navAni:3">Library</a></li>
                <li><a href="blog.php" style="--navAni:4">Blog</a></li>
                <!-- Conditionally display Login or Logout link -->
                <?php if ($is_logged_in) { ?>
                    <li><a href="logout.php" style="--navAni:5">Logout</a></li>
                <?php } else { ?>
                    <li><a href="login.php" style="--navAni:5">Login</a></li>
                <?php } ?>
            </ul>
            <label class="mode">
                <input type="checkbox" id="darkModeToggle">
                <i class='bx bxs-moon'></i>
            </label>
        </div>
    </header>
    <main>

        <div class="booksummary">
            <div class="status">Excuses and Self-Deception</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                Allan often lamented his procrastination, a skill he seemed to master effortlessly. His friends labeled
                him
                the "Teflon guy" for being remarkably unaccountable, even to himself. Excuses flowed seamlessly:

            </p>
            <p>
                "It's not due for weeks."<br>
                "I can do that work in a few hours."<br>
                "I work better under pressure."<br>

            </p>
            <p>
                However, another day always became another, and soon weeks and months passed without any progress. Why
                couldn't Allan see how he was just rationalizing this needless delay?

            </p>
            <div class="subhead">
                Issue
            </div>
            <p>Even after understanding the basic impulse to give in to feel good (chapter 2) and not really
                feel more like doing it tomorrow (chapter 3), we often procrastinate by giving excuses and convincing
                ourselves that doing this task later is better. Why, even after knowing that we are convincing
                ourselves, do
                we accept it? To understand this and avoid this from occurring again, let's explore and then work out
                some
                strategies for change.
            </p>
            <div class="subsubhead">1. Discounting Future Rewards over Short-Term Rewards
            </div>
            <p>Just like how a faraway mountain seems smaller than a pencil in hand, similarly, when we include
                time into perspective, the size of the reward changes; the further away rewards seem to be smaller than
                the
                smallest reward that is immediately available. This reduces the motivation to do a particular task
                because
                motivation is inversely proportional to time, as you can see in the below equation:
            </p>
            <div class="formula">
                <ul style="display: flex;">
                    <li style="margin-top: auto; margin-bottom: auto;">Motivation = &nbsp;</li>
                    <li>
                        <div class="RHS"> Expectance x Value
                            <hr> Impusivity x Delay
                        </div>
                    </li>
                </ul>
            </div>
            <p>This equation is from another book, but I provided it to make the understanding better.
            </p>

            <p>I guess this shouldn't surprise us too much. From an evolutionary perspective, a bird in the
                hand is worth than two in the bush. Our brains seem programmed to prefer immediate rewards. This Stone
                Age
                brain is not so adaptive in our modern world, where we need to meet distant deadlines by doing things
                today.
            </p>

            <div class="subsubhead">2. The Planning Fallacy: Underestimate the Time Things Will Take and Overestimate
                How
                Much We Can Do
            </div>

            <p>We often plan our tasks, and while doing so, we underestimate the time things will take and
                overestimate how much we can do. This is the normal nature of a human being; we are optimistic, and as a
                result of this Optimistic Bias, we get poor planning. A planning which could have made us stress-free in
                the
                future is not because of optimism. Optimism is not bad; it helps us to be motivated and also provides
                self-belief. But while making important decisions like making a plan, we should not take into
                consideration
                the optimism. Instead, underestimate the time and then make sure you don't procrastinate, and you will
                more
                likely stick to the plan because, as you complete any single task, you will see that the time required
                to
                complete a task is less than you imagined it to be. This rewarding feeling will help you to enter the
                state
                of flow, and as a result, things would be done sooner.
            </p>
            <div class="subsubhead">3. Self-handicapping to Protect Self-esteem</div>
            <p>
                To self-handicap is to provide an excuse for oneself. For example, if you were to wear weighted shoes
                and
                have a running race with a friend, your ability to competence as a runner would never come into
                question;
                you would never think about what mistakes you did. If you lose the race, then the fault is the handicap,
                the
                heavy shoes, and if you win, then it's extraordinarily meritorious. It is a win-win for an individual's
                sense of self. Certainly, self-esteem is never threatened.

            </p>
            <p>A similar situation can arise with procrastination. By delaying the tasks to the extreme
                last moment, we can develop another situation. In such a situation, if you fail, you would give an
                excuse
                that it was a short amount of time. And, of course, if the task is done very well, it looks
                exceptionally
                good for the individual, while it was just a matter of luck this time, which is surely not a reliable
                factor.
            </p>
            <p>Of course, delay of this sort has begged the question of whether this is truly
                procrastination at all because it can be seen as a strategic use of delay. But it is worth including
                here
                just to acknowledge that we can end up delaying our tasks for reasons that may not at first seem
                apparent.
            </p>
            <div class="subsubhead">4. Preferring Tomorrow over Today</div>
            <p>If B is greater than A and C is greater than B, then C is also greater than A. This type of
                relation is known as a transitive relation.
            </p>
            <p>What about this example? Imagine a task is due Friday, and today is Monday morning. The
                task seems to be more preferable on Tuesday, then Tuesday arrives, "Ah, the task is now more preferable
                on
                Wednesday." Wednesday arrives, now the task is more preferable on Thursday. Thursday arrives, Oops, now
                Monday seems more preferable. This type of relation is called intransitive preference. Chrisoula
                Andreou, a
                philosopher at the University of Utah, has argued that when it comes to procrastination, this is a
                common
                problem with our thinking.
            </p>
            <p>Certainly, this is why many retirement saving plans suffer. It comes to a point where
                tomorrow is no longer preferable, rather an earlier date is actually preferred (and it is now too late
                to
                act).
            </p>
            <p>The problem is that the intransitive nature of this preference structure works against us
                in the long run. Tomorrow is not as preferable as we once thought.
            </p>
            <div class="subsubhead">5. Our Irrational Thoughts or Perfectionism as a Cage:
            </div>
            <p>We often believe things that are not true. We never challenge these beliefs with reality
                testing, so they persist. For example, we might believe that we cannot make any mistakes or that we have
                to
                be able to answer any and every question after a presentation. We might believe we need to be perfect.
                We
                might think that our whole self-worth is dependent upon our career success. All of these examples are
                irrational thoughts, and they are common and problematic. They can lead us to experience very negative
                emotions, and they provide an excuse for not trying. For example, if we are fearful that we cannot do a
                task
                perfectly and that our self-worth depends on this perfect performance, then we may avoid the task to
                protect
                our self-esteem. We procrastinate.
            </p>

            <div class="subsubhead">6. Manufacturing Our Own Happiness and Resolving Internal Conflict
            </div>
            <p>When our actions or beliefs, especially conflicting ones, cause discomfort, psychologists refer
                to it as cognitive dissonance. This uneasy state arises when we delay actions we've intended to take,
                creating a gap between our intentions and behavior. Procrastination incurs a cost in the form of this
                dissonance, as we voluntarily delay action despite knowing it may have negative effects.
            </p>
            <p>
                Here are a few typical reactions that researchers have cataloged as responses to dissonance (and ways
                that
                we reduce this dissonance):

            </p>
            <p class="list">
                1. Distraction—we divert our attention away from dissonant cognitions and avoid the negative affective
                state
                caused by dissonance. <br>
                2. Forgetting—can be in two forms, passive and active. Passive is often the case with unimportant
                thoughts,
                while we may have to actively suppress important cognitions that are causing dissonance. <br>
                3. Trivialization—involves changing beliefs to reduce the importance of the dissonance-creating thoughts
                or
                beliefs. <br>
                4. Self-affirmation—creates a focus on our core values and other qualities that reassert our sense of
                self
                and integrity despite the dissonance. <br>
                5.Denial of responsibility—allows us to distance ourselves as a causal agent in the dissonance. <br>
                6.Adding consonant cognitions—often by seeking out new information that supports our position (e.g.,
                "this
                isn't procrastination"; "I need more information before I can do anything on this project"). <br>
                7.Making downward counterfactuals—"it could have been worse"—so we don't learn anything; we just feel
                better
                in the short term. <br>
                8.Changing behavior—to better align with our beliefs and values. This means that we would act instead of
                procrastinating, although changing one's behavior requires effort and is often not the most convenient
                way
                to reduce dissonance.
            </p>

            <p>We often employ strategies, such as manufacturing our own happiness, as coping mechanisms to
                stay positive daily. However, not all coping methods are beneficial. Research consistently shows that
                emotion-focused strategies like distraction and denial are less effective in the long term than
                problem-solving approaches. While taking care of our emotions is important, relying solely on short-term
                feel-good strategies can lead to long-term consequences.
            </p>
            <div class="subsubhead">The Myth of the Arousal Procrastinator:
            </div>
            <p>We often hear people saying, "I work better under pressure." This reflects a thinking sensation
                seeker of sorts, someone who works well under pressure. Although many people use the excuse that they
                work
                better under pressure, it often leads to more errors and falls into the category above as an example of
                a
                rationalization for the dissonance we feel when we fail to act as intended. Perhaps a more accurate way
                to
                rephrase this oft-heard expression is that "we only work under pressure." Why? Most probably because of
                the
                mistaken belief, presented in chapter 3, that our motivational state must match our task at hand.
            </p>
            <div class="subsubhead">STRATEGIES FOR CHANGE</div>
            <p>We tend to be overly optimistic about the future and downplay the importance of distant goals.
                However, when it comes to taking action, we often choose tomorrow over today and make excuses to feel
                better
                about not working. Change in these psychological processes is complex but possible.
            </p>
            <p>Knowledge is power. Recognizing that it is human nature to have these biases, and more
                importantly, identifying specifically what we tend to do can be the beginning of change. For example, if
                we
                typically say something like "Ah, it's not that important" (trivialization of the goal) or "There's lots
                of
                time yet, so I'd prefer to do it tomorrow" (planning fallacy and intransitive preferences), we can learn
                to
                make these "flags," or signals for change.
            </p>
            <p>By flag or signal, I mean that as soon as we say something like "There's lots of time, I
                can do this later," it acts as a trigger or stimulus for a new response. Remember the earlier example of
                this as an implementation intention? IF we say "Ah, it's not that important," THEN we stop and remind
                ourselves that this is a form of self-deception, a bias in our thinking, and we just get started on the
                task
                instead.
            </p>
            <p>This form of implementation intention puts a cue in the situation (even in our thinking) to
                help us break a habit. The thought becomes the stimulus for a different response. We break our habitual
                way
                of responding. We begin to break that pernicious procrastination habit.
            </p>
            <p>The takeaway for this chapter in terms of what you might do now is to use the space below
                (or a separate sheet of paper or your computer) to list the things that you commonly say or do to
                justify
                your procrastination. You may need to compile this list over the next few days or weeks. The key thing
                is to
                learn to recognize how you are reasoning and rationalizing the voluntary, unnecessary delays in your
                life.
                Each of these statements can become your own flags to signal a new response.
            </p>
            <p>My typical excuses for rationalizing a needless delay are:
            </p>
            <p>
                . <br>
                . <br>
                . <br>
                . <br>
                . <br>
                . <br>
                . <br>
                . <br>
                . <br>
            </p>
            <p>If these are your typical rationalizations or excuses for needless task delay, what will
                your new response be? In the next chapter, you will see that I think the important step is "just get
                started." So our standard implementation intention is "IF I say something to myself like 'Oh, I'll feel
                like
                doing this tomorrow,' I will catch myself in this self-deception and add
            </p>
            <p>THEN I will just get started on the task instead.
                It works. You'd be surprised. In the next chapter, I explain why.</p>
        </div>
        <span class="buy"><a href="https://www.amazon.in/Solving-Procrastination-Puzzle-Concise-Strategies/dp/0399168125?crid=3PUB9EZW9KPUK&dib=eyJ2IjoiMSJ9.y8ukDYcUw44p0lqNXfSxbRab6tf1kjUClyvVX_TMpFJIj-J2JA6m_H-HkzJ0upcDve0qIooMZQBjOzzGpwQVL016OXUzjpFFo6i65q3Uhljjjp8tnAcPmAvDr4ihSm1__HtaGe9izmt7chglwFPmFMZeN37q2w6ibm_59aqVqNBS_sSgQVKlc96PsCEUxBS0xw9Y6MfNaeJjBfofbJOwLKqoJZIj7LVs2PHL3VHzfxI.u1wk07v3octJMlYJO5HdjgS5szLVCChuWqoK71IjCXg&dib_tag=se&keywords=solving+the+procrastination+puzzle&qid=1708798014&sprefix=solving+%2Caps%2C233&sr=8-1&linkCode=ll1&tag=suggested0b-21&linkId=9643e58091cd8a149d889f7c235654bb&language=en_IN&ref_=as_li_ss_tl"><img src="download.png" alt=""></a></span>


        <div class="page-links">
            <a href="solving_01.php">1</a>
            <a href="solving_02.php">2</a>
            <a href="solving_03.php">3</a>
            <a href="solving_04.php">4</a>
            <a href="solving_05.php">5</a>
            <a href="solving_06.php">6</a>
            <a href="solving_07.php">7</a>
            <a href="solving_08.php">8</a>
            <a href="solving_09.php">9</a>
            <a href="solving_10.php">10</a>
        </div>
        <div class="comtitle">Comments</div>
        <div class="comment-form ">
            <form action="solving_05.php" method="POST">
                <textarea name="comment_content" placeholder="Write your comment here..." required></textarea>
                <button type="submit">Submit Comment</button>
            </form>
        </div>
        <!-- Display existing comments -->
        <div class="comments-section">
            <?php
            // Check if $comments is not empty before iterating over it
            if (!empty($comments)) {
                foreach ($comments as $comment) : ?>
                    <div class="comment">
                        <p><strong>
                                <?php echo $comment['user_name']; ?>:
                            </strong></p>
                        <p>
                            <?php echo $comment['content']; ?>
                        </p>
                        <p><small>
                                <?php echo $comment['created_at']; ?>
                            </small></p>
                    </div>
            <?php endforeach;
            } else {
                echo "<p>No comments available.</p>";
            }
            ?>
        </div>
    </main>
    <footer id="ContactUs">
        <ul class="end">
            <li class="end__item">
                <div class="one">How can we help?</div>
                <div class="two">Contact us anytime</div>
            </li>
            <li class="end__item">
                <div class="one">Send us a message</div>
                <div class="three"><a href="mailto:gongesoham@gmail.com">gongesoham@gmail.com</a></div>
            </li>
            <li class="end__item">
                <div class="one">Policy</div>
                <div class="three"><a href="privacy-policy.php" style="padding-bottom: 0px;">Privacy Policy</a></div>
                <div class="three"><a href="termsandconditions.php">Terms and Conditions</a></div>
            </li>
            <li class="end__item">
                <div class="one">Follow us</div>
                <div class="four" id="secele"><a href="https://www.instagram.com/its_soham91/" style="--socialAni:4"><i class='bx bxl-instagram'></i></a></div>
                <div class="four"><a href="https://www.youtube.com/@readwithsoham" style="--socialAni:4"><i class='bx bxl-whatsapp'></i></a></div>
            </li>
        </ul>
        <hr>
        <img src="logo-dark.png" alt="Readwith Soham Logo">
    </footer>
    <script>
        document.addEventListener('DOMContentLoaded', function() {
            const darkModeToggle = document.getElementById('darkModeToggle');
            const body = document.body;

            // Function to update dark mode state
            function updateDarkMode() {
                const logo = document.getElementById('logo');
                if (darkModeToggle.checked) {
                    body.classList.add('dark-mode');
                    logo.src = 'logo-dark.png';
                    localStorage.setItem('darkMode', 'enabled');
                } else {
                    body.classList.remove('dark-mode');
                    logo.src = 'logo.png';
                    localStorage.setItem('darkMode', 'disabled');
                }
            }

            // Use localStorage to store dark mode state
            const isDarkMode = localStorage.getItem('darkMode') === 'enabled';
            if (isDarkMode) {
                darkModeToggle.checked = true;
                updateDarkMode();
            }

            // Add event listener to dark mode toggle
            darkModeToggle.addEventListener('change', updateDarkMode);
        });
    </script>

</body>

</html>