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
    $article_title = "solving_10"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_10.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_10"; // Replace with actual article title
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
            <div class="status">Cyberslacking on the Procrastination Superhighway</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                <span class="bold">IT'S APPROACHING MIDNIGHT AND </span> Ari still hasn't started to work on his report,
                even though he sat down at his computer at 7 p.m. When he got to his desk earlier that evening, his
                intention had been to get to work, but he thought, "I'll just update my Facebook status—it will only take a
                minute." Now, hours later, he's still there.
            </p>
            <div class="subhead">ISSUE</div>

            <p>This chapter addresses the impact of internet-based technologies and communication tools like
                smartphones on procrastination. Despite being essential for productivity, these tools can also be
                significant time-wasters. A study from over a decade ago found that participants reported spending 47
                percent of their online time procrastinating, highlighting the potential challenges posed by these
                technologies to effective time management.</p>
            <p>
                I doubt that I have to write very much to convince you that the Internet has the potential to waste time if
                you want it to. People I know know about this sad, unpleasing fact. The best example I have in relation to
                this chapter is a reply to one of authors <i>Psychology Today blog</i> posts. In response to the "it will
                ony take a minute" theme, an anonymous reader wrote:
            </p>
            <div>
                <p style="font-family: 'system-ui', -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 1rem; font-weight: 500;">
                    im procrastinating.. . . .that's why im here . . . i just google things im thinking about, like this. .
                    . or like <br>
                    i hear someone hum a familiar tune, so i look up the song to know who sang it . . . i mean that
                    LITERALLY takes a minute, but then that makes me google a couple other things and then it ends up
                    lasting a lot more than a few minutes. . . and i honestly dont realize when i end up reading the
                    wikipedia page of some random disease that some singer had that was related to the singer i was looking
                    up. wait, why was i looking him up? oh right, cos someone at my school was humming a song by him.. . .
                    .oh right, school. . . .essay due tomorrow, haven't started. <br>
                    &nbsp;&nbsp;&nbsp;like right now,i just realized . . .im commenting on an article.....i wish i could
                    read those articles about my essay and try to get 2000 words on paper in a day
                </p>
            </div>
            <p>The thing is,we end up wasting time even when we don't want to. This is the real problem,
                and one that we need to identify in order to make change.</p>
            <p>Author says,"I just want to be clear about something. I am not saying we cannot work and
                play online. Personally, I really enjoy these technologies--I use them intensively, in fact-and I know we
                will see them grow in important. What I am emphasizing that we can waste time in unexpected and
                unacticipated ways with these technologies <i><b>when we don't want to.</b></i> This is the issue. These
                technologies are particularly problematic when it comes to self-regulation and self-regulation failure."</p>
            <p>Ari planned to work on his report. He got to his desk as planned. What happend?</p>
            <p>
                Ari's decision to "update my Facebook page" seems rational in the short term, taking only a minute. However,
                the recurrence of the same decision shortly afterward reflects the potential pitfalls of quick
                rationalizations. As discussed in Chapter 4, our thinking can deceive us, allowing us to justify further
                delays incrementally. This intransitive preference, where each minute delay seems acceptable individually,
                becomes apparent. At midnight, Ari acknowledges the need for earlier action, realizing the cumulative impact
                of those incremental delays.

                This issue of making rational decisions over short periods, coupled with cognitive challenges like
                intransitive preferences, contributes to the hazards of internet usage and social networking for goal
                pursuit. The chapter suggests that procrastination online is not solely attributed to rapid decision-making
                but also involves various psychological factors that make online activities particularly prone to
                procrastination.
            </p>
            <div class="list">
                1.Social Networking is rewarding because it fulfills a basic a human need. We are socail animals so, social
                networking makes sense to us. <br><br>
                2. Online social networking is immediately rewarding and can become addictive due to its combination of
                rewards and immediacy. The addictive nature of the Internet contributes to self-regulation failure,
                undermining our best intentions. <br><br>

                3. The Internet poses a challenge for procrastination because of its ready distractions, particularly
                problematic for impulsive individuals. Constant interruptions, such as email and text messages, can disrupt
                on-task work, leading to procrastination as individuals succumb to immediate tasks. <br><br>

                4. "Push technologies" on the Internet, like email and text messages, constantly push notifications, making
                it easy to be interrupted during work. This disrupts focus, and the temptation to engage in tasks that seem
                quick (even if not chosen in the long run) can lead to procrastination, negatively impacting goal pursuit.
                <br><br>

                5.On top of all of these is the myth of multitasking it's for sure a myth, Let's see why I am saying this.
                Multitasking was not a word until the century of computer began as computer technologies grew we know that
                processors were made which were said to be multitaskers and they worked very efficiently, that's why people
                started multitasking as multitasking was by the time considered to be very important and efficient, but the
                truth is that it had never been even the processors which are called multitaskers aren't doning multiple
                tasks at the same time it's rather that instead of leaving the processor ideal it was given task one after
                another it switched from one task to another not like doing two task at a same time. So, Remember that
                multitasking is a Myth and was a Myth. <br>
            </div>

            <div class="subhead">STRATEGIES FOR CHANGE</div>
            <p>
                Minimizing distractions is part of that predecision to kep us on task.
            </p>
            <p>
                Minimizing distractions is crucial for combating online procrastination. Disconnecting from potential
                diversions like social-networking tools, shutting off platforms such as Facebook and email, helps stay
                focused on goal pursuit.
            </p>
            <p>
                While it may be tempting to maintain a "business as usual" approach, committing to reducing procrastination
                requires a conscious decision to shut off everything except the necessary program on your computer. This
                deliberate action enables planned breaks, breaking unconscious habits associated with procrastination.


            </p>
            <p>
                Reducing distractions not only makes it clearer when you deviate from your goal pursuit but also puts a
                buffer between you and alternative tasks. This additional effort provides a moment to reconsider whether
                abandoning your goal for an alternative task is truly what you want to do, fostering a more intentional
                approach to task management.
            </p>
            <p>
                There have been all sorts of tools and "apps" designed to help people regulate their Internet use more.
                Common current examples include tools that lock you out of your email or record what applications you are
                using and for how long. These may be helpful to you, but techniques and technologies can never be a
                substitute for a commitment to change.
            </p>
            <p>Let's End this final Chapter with some pure words of the author mentioned as below:</p>
            <p>
                I think it is appropriate to end this final chapter where I began ourconsideration of why we
                procrastinate—glvmg in to feel good, Giving in to feelgood is a big piece of the procrastination puzzle, and
                the lnternet provides lotsand lots of short-term, but speclous, rewards to which we can glve in to feel
                good.
            </p>
            <p>
                With a click or two we can leave the task that we feel bad about and seek imediate mood repair. If you
                understand that this is what you are doing, you are truly on the road to change.
            </p>
            <p class="parainden lastpara">That does not mean that this is easy, and I turn now to some thoughts about the
                road ahead. It is a journey that is often described as "two steps forward, one step back."</p>
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
            <form action="solving_10.php" method="POST">
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