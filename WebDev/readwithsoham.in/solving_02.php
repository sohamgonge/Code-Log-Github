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
    $article_title = "solving_02"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_02.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_02"; // Replace with actual article title
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
    <link rel="canonical" href="https://readwithsoham.in/index.php">
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
            <div class="status">Costs of Procrastination</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                The Author once attended a conference titled Living Well and Dying Well where they disscuss about grief
                that
                people have about regrets people experience after losing a loved one. To be more specific the regrets of
                omission they didn't do while the person was alive there were majorly 4 regrets which are listed below
            </p>
            <p>
                Regret Of:
            <p class="list">
                1. things they truly intended to do but kept putting off. (Procrastination) <br>
                2 Missed oppurtunities: general ideas of what they could have done not specific plans.<br>
                3. what they feel they "should" have done, base on societal norms. (Cultural Expectation)<br>
                4.what they think their loved one might have wanted them to do. (Loved one's desires)<br>
            </p>
            </p>
            <p>
                When Timothy asked the psychologist's which type of regret seemed most problematic, as expected the most
                problematic regret was of Procrastination. Things they intended to do but didn't do.

            </p>
            <p>
                Let's look at some issues about procrastination, procrastinaiton is actually a failure of self
                regulation a
                failure you get when you intend to do something but aren't able to regulate your body to act for it.

            </p>
            <p>
                We know as everyone lies so do everyone procrastinates and if everyone procastinates then why is this a
                problem? The evidence is the research which shows that people who score high on self rrport meausers of
                procrastination also self reported lower achivement and poor health, Lets look at each closely.
            </p>
            <p>
                Lets justify why procrastination leads to lower achievement when a person procrastinates he/she might
                have a
                memory of instances where they did very well on the tough job, memories like these are cherrished and
                next
                time when they have to go throught some task these memories come up and we justify the procrastination
                and
                this results in doing a thorough job in a less time, loss in the quality and often guilt and failure so
                that
                is why people who procrastinated have lower achievements.
            </p>
            <p>
                Also the reseach conducted by a university of calgary ahs shown that nothing comes good from
                procrastination
                and rather harms our performance. The fact that when we think of procrastination we often get negative
                emotions which is confusing Why is procrastination related to negative emotions? while procrastination
                means
                avoiding tasks which you feel like doing and doing what makes you happier, to find out is it really the
                case
                when the researchers asked questions to procrastinator they found out that even while procrastinating
                the
                procrastinators weren't happy rather had mixed emotions including guilt.
            </p>
            <p>So Procrastination not only reduces our achivements while making up sad in long term but
                also it do affect our health in two ways firstly it builts stress and stress compromises our immune
                systems
                and Secondly, chronic procrastinators delay their behaviours like exercising eating healthy and getting
                enough sleep. Not eating healthy or getting enough exercise or sleep hours won't affect you tomorrow but
                when you delayed it today you rationalize it and since tomorrow is the same day it gets neglected and
                eventually accumulates and leads to sever issues in future.
            </p>
            <p>Procrastination is like not living for yourown self. Whenever you procrastinate you are the
                worst and most dangerous enemy of Yourself. These are our goals, our tasks, and we are needlessly
                putting
                them off. Our goals are the things that make up a good portion of our lives. Isn't Achiveing your goals
                the
                most rewarding think of going to bed after studying for hours a day, completeing the work asigned to
                you,
                doing all your chores wouldn't that be Releafing won't it be rewarding.
            </p>
            <p>
                The only thing that is most limited resource of our life is time. Then why waste it? Do you remember the
                Dialouge of Robert Drowney form Movie End Game Even Billions of Dollars Cann't buy you one second then
                why
                waste it?

            </p>
            <div class="subhead">
                STRATEGY FOR CHANGE
            </div>
            <p>
                One of the most important preconditions for successful change is a deep commitment a commitment so
                strong
                that until you break this habit no day comes when you get back it it. Let's first focus on costs of
                Procrastination

            </p>
            <p>
                Do you remember the table you made while reading the chapter 0 go through that table may be you want to
                add
                some more rows to it after reading this do that also remember that if you want to stop an addiction that
                you
                always think you will do that tomorrow then add it to the list and then make a new coloumn to that table
                where you will list down how has this procrastination affect you in terms of things such as your
                happiness,
                stress, health, finances, relationships and so on you may even want to discuss this with a confidante or
                a
                significant other in you life who knows you well. Procrastinating isn't just bad for you, it's like
                secondhand smoke – it hurts the people around you with broken promises, unfinished work, and extra
                stress.

            </p>
            <p>
                In short, it is important to recognize and acknowledge all of the costs associated with the
                self-regulation
                failure we commonly call procrastination. This knowledge can be helpful in maintaining your commitment
                to
                change. What I expect you will see in this list is how much you are paying for your procrastination. But
                don't worry the rewardd of the following through with your reading today is to learn how to eliminate
                these
                unnecessary costs in your life.

            </p>
            <p class="subsubhead">
                After Understanding the cost of Procrastinating your Goals Let's Learn How to Strengthen Goal
                Intentions:

            </p>
            <p>
                Strong commitment to goal is absolute essential part of the recipe. As is commonly said, where there's a
                will, there's a way which holds true when you are committed. to strength a goal intention, it is
                important
                to recognize the bbenefits of acting now, not just the cost of needless delay.


            </p>
            <p>
                Aligning goals with personal values and long-term objectives, or acknowledging the short-term advantages
                of
                completing necessary tasks, reinforces goal commitment. The importance of reflecting on why a goal or
                task
                is essential and the benefits of immediate action is emphasized. Mere knowledge of the benefits may not
                lead
                to action; realizing their significance in our lives is essential. Waiting for a life-altering event,
                like a
                health diagnosis, is not an effective strategy, as it may be too late. Regularly examining intentions is
                key
                to reducing procrastination and increasing the likelihood of timely action. Strengthening goal
                intentions is
                crucial for proactive and effective life management.
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
            <form action="solving_02.php" method="POST">
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