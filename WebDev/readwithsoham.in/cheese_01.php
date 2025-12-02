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
    $article_title = "cheese_01"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: cheese_01.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "cheese_01"; // Replace with actual article title
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
    <link rel="canonical" href="https://readwithsoham.in/cheese_01.php">
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
            <div class="status">Introduction:Who Moved My Cheese?</div>
            <div class="by">
                Spencer Johnson
            </div>
            <p>
                Do you want to know the effective way to cope up with change? How do you deal with a sudden loss of job? How do you deal with unexpected problem in the business? Nothing is permanent in life. Change will always come your way. The difference is how you cope up with it.
            </p>
            <p>

                Who Moved my Cheese is a story of 4 characters. One of them will teach you the best way to deal with change. The characters live in a maze with many rooms and corridors. The cheese represents what people want most in life. It can be a stable job, a successful business, a loving family, good health or peace of mind.
            </p>
            <p>
                What if one day that cheese is taken away from you? What would you do? You will see yourself in the 4 characters. Sometimes, you find it hard to accept the change. Sometimes you get depressed or anxious about the future. As you follow the adventure of the 4 characters, you will learn valuable lessons which you can apply in your life. </p>
            <p class="subhead">Who Moved My Cheese?</p>
            <p>A long time ago in a distant land there are 4 characters that live in a maze. Two of them were mice. Their names are Sniff and Scurry. Two of them are people as little as mice. They are called Hem and Haw. </p>
            <p>Sniff and Scurry have good instincts and simple brains. They just search, sniff and scurry for cheese just like all mice do. Hem and Haw meanwhile have more complex brains. They have emotions and beliefs. Cheese is very precious for them. It makes them feel successful and happy.</p>
            <p>Every morning, the mice and little people put on their running shoes. They leave their small holes and go around the maze to search for cheese. </p>
            <p>The maze is full of twists and turns. It is a labyrinth of many doors and chambers. Some of them have cheese inside. But some of them are dark and empty. Anyonecan lose their way. But the maze has secrets that give happiness and fulfilment in life, for those who can find it.</p>
            <p>Sniff and Scurry just use trial and error in their search. They enter a corridor. If it’s empty they just turn around and keep looking. They take note of the empty corridors and move on to new paths. </p>
            <p>Hem and Haw have complex brains though. Theyhave complex ways of viewing things. Sometimes, their beliefs and emotions take over them. It makes their search more challenging and complicated.</p>
            <p>But all four of them eventually found their own way to Cheese Station C. It is where there is pile after pile of cheese. Sniff, Scurry, Hem and Haw fell into their own routines after finding that abundant supply of cheese.</p>
            <p>Sniff and Scurry wake up early in the morning like they always do. They put on their running shoes and race their way to Station C. When they get there, they take off their shoes, tie them together and hang them around the neck. That is so they can put the shoes on again quickly for future use.</p>
            <p>"After that, Sniff and Scurry eat off their cheese."</p> <br>
            <p>"Hem and Haw is different. They wake up a little late every day. They prepare a little slower and walk to Station C. After all, they know that the cheese is there. "</p>
            <p>"When they get to Station C, Hem and Haw would take a rest and relax. They take off their and put on their slippers. Hem and Haw are comfortable now that they have found where the cheese is."</p>
        </div>
        <span class="buy"><a href="https://www.amazon.in/Solving-Procrastination-Puzzle-Concise-Strategies/dp/0399168125?crid=3PUB9EZW9KPUK&dib=eyJ2IjoiMSJ9.y8ukDYcUw44p0lqNXfSxbRab6tf1kjUClyvVX_TMpFJIj-J2JA6m_H-HkzJ0upcDve0qIooMZQBjOzzGpwQVL016OXUzjpFFo6i65q3Uhljjjp8tnAcPmAvDr4ihSm1__HtaGe9izmt7chglwFPmFMZeN37q2w6ibm_59aqVqNBS_sSgQVKlc96PsCEUxBS0xw9Y6MfNaeJjBfofbJOwLKqoJZIj7LVs2PHL3VHzfxI.u1wk07v3octJMlYJO5HdjgS5szLVCChuWqoK71IjCXg&dib_tag=se&keywords=solving+the+procrastination+puzzle&qid=1708798014&sprefix=solving+%2Caps%2C233&sr=8-1&linkCode=ll1&tag=suggested0b-21&linkId=9643e58091cd8a149d889f7c235654bb&language=en_IN&ref_=as_li_ss_tl"><img src="download.png" alt=""></a></span>


        <div class="page-links">
            <a href="cheese_01.php">1</a>
            <a href="cheese_02.php">2</a>
            <a href="cheese_03.php">3</a>
            <a href="cheese_04.php">4</a>
            <a href="cheese_05.php">5</a>
            <a href="cheese_06.php">6</a>
        </div>
        <div class="comtitle">Comments</div>
        <div class="comment-form ">
            <form action="cheese_01.php" method="POST">
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