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
    $article_title = "solving_07"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_07.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_07"; // Replace with actual article title
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
            <div class="status">Why Getting Started the Whole Solution</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                <span class="bold">HANS HAS REALLY BEEN </span>taking his "Stop Procrastinating" goal to heart. Today,
                rather than put off work on his report as he typically has, he just got started. He was surprised at how
                good he felt. He even felt more optimistic about the results. Then, about forty-five minutes into the work,
                the phone rang. Bruce, a friend Hans sees daily, was calling with an invitation to play squash. Bruce
                invited Hans to play squash because his original partner canceled last minute. Hans, despite intending to
                work, felt in control of his schedule and agreed to meet Bruce at the gym at 12:30.
            </p>
            <div class="subhead">ISSUE</div>

            <p>In the above scenario, Hans's goal was his report, and he made the key first step of getting
                started. He also implemented an intention to begin his work right after he finished breakfast as he decided
                it the night before. He made his decision with: "If breakfast is done, then I will immediately go to my desk
                and start working on the third section of my report." The important thing to note here is he had a concrete
                idea of where to begin his action, which was the "third section," although it was not the first part of the
                report but rather a section that he felt would be an easy place to begin.
            </p>

            <p>He felt good about finally doing this. At the very least, there is usually a sense of
                relief when we get to an avoided task. Unfortunately, these good feelings are a trap for us. They make us
                feel overly optimistic, and some of our biases while planning and thinking may emerge, i.e., what happened
                to Hans and thoughts emerged when he was even a little bit stuck in his progress. Also, at one point he hit
                a tough spot and caught himself thinking, "Ah, that's enough for today. I'll feel more like doing this part
                tomorrow." In fact, he was somewhat relieved when Bruce called. It seemed a perfect excuse to stop.
                Certainly, exercise is important in life, too, he thought.
            </p>
            <p>What this means is that we have to recognize other points at which we typically abandon our
                goal pursuit. We have to be prepared to acknowledge these thoughts when they arise; otherwise, we will fall
                back into our habitual ways of responding and tend to procrastinate more than we'd like; then our habitual
                response will find a way to avoid the task at hand.
            </p>
            <p>Procrastination is not just a failure to get started. We can face a variety of problems and
                needlessly delay action at many stages of goal pursuit. We can be distracted and derailed, and if we let
                ourselves for just one minute, we will end up finding ways to justify this to ourselves.
            </p>
            <p>In Hans's case, the squash invitation can be seen as an unnecessary disruption given how
                regularly Hans sees his friend, as well as Hans's intention to work today. Let's take a common example: we
                are all working on computers, and when we put off a task at hand by checking email or surfing the web. This
                should take only a minute, but hours later you find yourself still off the task; we will discuss more about
                this in Chapter 9.
            </p>
            <p><span class="bold">What do you learn from this?</span> We got to know that good intentions won't
                work; we will have to use our limited willpower to get things done. To do this work of dealing with
                potential distractions and obstacles ahead, we can make pre-decisions to help us here too.
            </p>

            <div class="subhead">STRATEGIES FOR CHANGE</div>
            <p>There are two ways to make pre-decisions regarding potential distractions. The first approach
                involves removing distractions before we begin our work. While the second approach takes us ahead of time by
                using implementation intentions that will guide us in doing tasks when distractions, obstacles, or setbacks
                are faced.
            </p>

            <div class="subsubhead">Approach 1: Minimizing Distractions</div>
            <p>Different things distract different people; some may find the radio on in the background or
                working in a noisy room as a distraction while some won't. This means we have to think about what our
                typical distractions are.
            </p>
            <p>For now, I would add Games, social-networking tools, web searches, or even just email to
                the list of potential distractions or obstacles. We would discuss more about it in the final chapter of
                Internet Procrastinations.
            </p>
            <p>For now, I would add Games, social-networking tools, web searches, or even just email to
                the list of potential distractions or obstacles. We would discuss more about it in the final chapter of
                Internet Procrastinations.
            </p>
            <p>To minimize distractions and maintain focus, proactively eliminate potential disruptions
                before starting work. This involves actions like closing doors, turning off phones, including text messaging
                and social media, and clearing your workspace of potential distractions. The key is to make a pre-decision
                by "shutting" out these distractions to enhance attention and concentration. While you can't predict every
                interruption, implementing intentions help address distractions as they come up. Let's see them in approach
                #2.
            </p>
            <div class="subhead">Approach 2: Implementation Intentions</div>
            <p>Implementation intentions involve creating "if...then" statements to anticipate and address
                potential distractions, thereby helping to shield our intentions from competing possibilities. These
                statements serve as proactive plans to navigate and overcome interruptions, enhancing focus and goal
                achievement.
            </p>

            <p>Implementation intentions have effects over and above our motivation to succeed. This is
                important. Commitment and motivation alone will not always get us through.
            </p>

            <p>It is time to think about your main procrastinated tasks again. In the table that follows
                (or as a thought experiment), list the kinds of distractions and obstacles that have resulted in further
                procrastination even when you have actually been working on the task. For each of these, note whether you
                can remove it prior to task engagement and/or add an implementation intention as your pre-decision about how
                you will act when it arises in the future.
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
            <form action="solving_07" method="POST">
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