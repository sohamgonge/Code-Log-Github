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
    $article_title = "solving_03"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_03.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_03"; // Replace with actual article title
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
            <div class="status">Something Important</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                Martin was going to report this morning. It was yesterday, and it felt good to
                postpone the awful task for the next day. Now, he is feeling a whole range of negative emotions, so he
                decides to work on some other, less important stuff instead. His mood lifts as he pushes the report aside
                for another day.
            </p>
            <div class="subhead">
                Issue
            </div>

            <div>
                As the work of Roy Baumeister and Diane Tice has clearly shown, procrastination is a form of self-regulation
                failure. We intend to act but don't use our self-control to act. This is what characterizes procrastination.
                We may voluntarily delay our action because we are unable or unwilling to self-regulate our behavior to act
                now.

            </div>
            <p>
                Why do we fail to self-regulate? Many factors are responsible for this, but the most important thing is that
                we "give in to feel good," i.e., in order to have immediate mood repair, we will do whatever it takes,
                usually at the expense of long-term goals.
            </p>
            <p>
                Impulsive - Sudden
            </p>
            <p>
                When we go for feel-good, it's because of impulsive urges. These can be anything — maybe gamble, shop, or
                eat more than we need, ingest mood-altering substances, or procrastinate — all in an effort to avoid
                negative emotions. Of course, we are now focusing on how we use procrastination — needless task delay — to
                give in to the feel-good.

            </p>
            <p>
                When facing a task we intend to do but don't want to, we feel a number of possible negative emotions. We may
                feel frustrated, angry, bored, resentful, depressed, anxious, or guilty. Can you relate this to the emotions
                listed in your table from Chapter 0? Generally, we call this task aversiveness. Aversive tasks are things
                that we all want to put off. They make us feel bad. We do not like doing these tasks.

            </p>
            <p>
                Who really wants to do an aversive task? No one, but it is important to reach our desired goal. We may not
                want to do the task, but we need to do it.

            </p>
            <p>
                The key issue is that for chronic procrastinators, short-term mood repair takes precedence. Chronic
                procrastinators want to eliminate their negative emotions now, so they go into feel good. They go with the
                impulse to put off the task until another time. This makes them feel better.

            </p>
            <p>
                If you find that when you are running away from negative feelings by delaying your tasks, then you are a
                chronic procrastinator. And while this is rewarding, the moment we put off the task until tomorrow, we feel
                relief from the negative emotions. And, as you may have learned by now in a psychology course, behaviors
                that are rewarding get repeated. We are reinforcing our procrastination; we are, in a way, training
                ourselves to become better procrastinators. And you know how this small improvement every day leads to a big
                jump (Atomic Habits), and it's a problem.

            </p>
            <div class="subhead">Strategies for Change </div>
            <p>
                To solve the issue of short-term mood repair in favor of long-term goal pursuit is a crucial one. It is
                important to recognize that giving in to feeling good is at the heart of self-regulation failure, and it is
                important to develop strategies for change.

            </p>
            <p>
                For this, Timothy suggests starting with the basic palatable strategy. This states that when faced with a
                task where our natural inclination is to say, "I'll do this later" or "I'll feel more like this tomorrow,"
                we need to stop and recognize that we are saying this to avoid the negative emotions we are feeling right
                now.

            </p>
            <p>
                Knowledge is power in this regard. We need to recognize that this task makes us feel awful, and in order to
                run away from these feelings, we require a certain amount of emotional intelligence. Emotional Intelligence
                is the ability to identify and utilize emotions and control behavior. Recent research has shown that lower
                emotional intelligence leads to more procrastination. By learning to more effectively perceive, understand,
                and regulate our emotions, the good thing is we can learn to perceive, understand, and regulate our
                emotions. This is very important in terms of self-control.

            </p>
            <p>
                People who procrastinate are aware that some tasks make them feel awful, and by procrastinating, they are
                trying to escape from these emotions. What they require is to focus further on strengthening their ability
                to regulate emotions or at least some commitment not to take the path of least resistance.

            </p>
            <p>
                "Don't give in to feel good, step on up to what should."
            </p>
            <p>
                You may chant this, and which may help you to increase emotional IQ. This tough strategy is immediately
                effective as a first step. We have to "suck it up," as they say. We have to admit that we feel awful after
                taking some tasks in hand. The first step at the moment of procrastination is to stop and recognize you are
                turning away in an effort to feel better. If you fail at this, then it's over.

            </p>
            <p>
                Staying put and dealing with these initial emotions is not the whole solution, but it's surely an absolutely
                necessary first step. We will discuss why preparing for this emotional experience, but for now, let's think
                about the first step in an anti-procrastination strategy.

            </p>
            <div class="lineim">
                <hr>
            </div>
            <div class="paraimple">
                <p>
                    Think: If I feel negative emotions when I face the task at hand, THEN <br> I will stay put and not stop,
                    put off a task, or run away.

                </p>
            </div>
            <div class="lineim">
                <hr>
            </div>
            <p>
                Instead of "suck it up, succeed," this is another gentler approach we can take. Of course, we are quite
                expert at finding reasons not to persist like this. When facing the negative emotions, we might even try to
                justify why we want to run away. We will not acknowledge our fear or frustration. We might simply think,
                "I'll feel more like doing this tomorrow." We probably won't. I think we all know this deep down. This is
                part of the strangely puzzling nature of procrastination. We have become our own worst enemy, and we even
                know how to lie to ourselves.

            </p>
            <p>
                Emotionally, we are giving in to feeling good while justifying this choice by thinking, "I'll feel more like
                doing this tomorrow." No, we won't! In the next chapter, I explain why.
            </p>
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
            <form action="solving_03.php" method="POST">
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