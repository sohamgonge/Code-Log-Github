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
    $article_title = "solving_09"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_09.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_09"; // Replace with actual article title
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
    <style>
        .booksummary img {
            width: 80%;
            height: auto;
        }
    </style>
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
            <div class="status">What's Bred in the Bone: Personality and Procrastination</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                <span class="bold">FIONA AND DAVID HAVE</span> been married for more than ten years now. Fiona's friends
                describe her as organized. In their group, she is the reliable planner who tackles tasks promptly, while
                he,
                David, sets high standards for himself but struggles with procrastination due to self-criticism. They
                share
                a similar penchant for tidiness but clash over scheduling and task execution, occasionally driving each
                other crazy.

            </p>
            <div class="subhead">ISSUE</div>

            <p>
                The example above highlights the notion of individual differences. We might think of Fiona as
                conscientious
                and David as perfectionist. This appoarch to personality is based on the concept of personality traits.

            </p>
            <p>
                Personality traits helps us to know how a person act on most of the situations, Of course how we behave
                depend on personality and situation but for now let's dive deeper in Personality Traits.

            </p>
            <p>
                Certainly, procrastination has shown relation with personality. Some people are more prone to
                procrastination, and an influencing factor is personality. This becomes more true when there is not
                enough
                supervisison, for example, if there isn't any supervisor actually monitoring our actions, then surely
                our
                procrastination will have an greater contribution towards procrastination.

            </p>
            <p>Form the above example we have two common traits to procrastination. Fiona's is
                conscientiousness, i.e. she is typically organized, planful, and dutiful- is a trait that is highly
                negatively related to procrastination. The more we are conscientious, the less we are typically
                procrastinate.
            </p>
            <p>The exact opposite can be seen in David's case, he is a socially prescribed perfectionist.
                Yes, there are different varities or types of perfectionisim.Here we will discuss about social
                prescribed
                perfectionism because it is the most strongly related to procrastination. In this type of perfectionism
                the
                indivisual believe that others hold unrealistic expectation, this created an experience of external
                pressure
                to be perfect and believe that others evaluate them critically as well. (that "little voice at David's
                head"
                is an example of internalized criticism)
            </p>
            <p>
                From the contrasting Fiona and David personality we can get an idea of how personality can cause
                resilence
                or risk factor towards the habit changing process of procrastinaiton. So we need to take this into
                accout in
                our own lives.

            </p>

            <p>How to determine if you have a procrastination-prone personality
            </p>
            <p>Before that, let me tell you that there are thousands of personalities that exist but
                psychologists have simplified these into a superstructure of traits known as the "Big Five." Which could
                be
                remembered using CANOE:Conscientiousness, Agreeableness, Neuroticism, Openness (to Experience), and
                Extraversion.
            </p>
            <p>Only two of these have meaningful relations with procrastination-Conscientiousness and
                Neuroticism(Which is also known as Emotional Instability).
            </p>
            <div class="instructions">
                <div class="subhead">INSTRUCTIONS</div>
                <p>For Each of the traits below, rate yourself from "Not at all like me" to "Exactly like
                    me" on how much you think the trait describes you. Rate this toughtfully because we would require
                    these
                    results in the future.
                </p>
                <div class="subsubhead">1.Conscientiousness</div>
                <p>Highly conscientious people are described as responsible, scrupulous, persevering, and fussy
                    or tidy. You can see how this trait is negatively associated with procrastination and might be
                    considered a resilience factor against unnecessary delay. The various facets of the trait as
                    measured in
                    popular personality tests include: Competence (efficient), Order (organized), Dutifulness (not
                    careless), Achievement striving (thorough), Self-discipline (not lazy), and Deliberation (not
                    impulsive).
                </p>
                <div class="ratings">
                    <img src="08_01.jpg" alt="">
                </div>
                <div class="subsubhead">2.Emotional instability</div>
                <p>Emotiona Insta I ity ISt ea ternatlve wor ingo t e traito Neuroticism. People who score high
                    on emotional instability can be described as nervous, worrisome, or anxious. The various facets of
                    the
                    trait as measured in popular personality tests include: Anxiety (tense), Angry hostility
                    (irritable),
                    Depression (not contented), Self-consciousness (shy), Impulsive (moody), and Vulnerability (not
                    self-confident)

                </p>
                <div class="ratings">
                    <img src="08_02.jpg" alt="">
                </div>
                <div class="subsubhead">3.Impulsiveness</div>
                <p>A person who scores high on impulsiveness tends to act before thinking. This trait reflects
                    low self-control, especially in the presence of potentially rewarding activities. Impulsivity
                    reflects
                    less ability to consider the consequences of one's actions.
                </p>
                <div class="ratings">
                    <img src="08_03.jpg" alt="">
                </div>
                <div class="subsubhead">4.Self-effiacy</div>
                <p>This trait represents the belief that we are able to do what is necessary to achieve a
                    desired outcome. It reflects self-confidence and competence.
                </p>
                <div class="ratings">
                    <img src="08_04.jpg" alt="">
                </div>
                <div class="subsubhead">5.Self-esteem</div>
                <p>Self-esteem is how we feel about ourselves. It is our appraisal of our self-worth. Another
                    way to think about it is the extent to which we perceive ourselves as being relatively close to
                    being
                    the people we want to be.
                </p>
                <div class="ratings">
                    <img src="08_05.jpg" alt="">
                </div>
                <div class="subsubhead">6.Socially prescribed perfectionism</div>
                <p>As I noted, socially prescribed perfectionists believe that others hold unrealistic
                    expectations for their behavior. They believe that others expect them to be perfect, and they can
                    feel
                    compelled to try to live up to these expectations.
                </p>
                <div class="ratings">
                    <img src="08_06.jpg" alt="">
                </div>
            </div>
            <p>Now that you have reviewed some of the main personality traits that researchers have identified
                as traits associated with procrastination, you can see which is larger, Your risk or resilience by
                evaluating them according to the following table, these would be out of possible 30.(Don't worry if your
                risk is lower than resilience don't panic I Soham also have a score in resilience more than risk,
                believe me
                the further strategies for change will fix all of these and provide you solutions to almost all your
                answers.)
            </p>
            <div class="scrollprob">
                <img src="08_07.jpg" alt="">
            </div>
            <p>This simple scale is not scientifically valid, but it does provide you with a rough estimate of
                your vulnerability to procrastination from a personality perspective. These scores provide an index in
                terms
                of how your personality is contributing to or protecting you from self-regulation failure. Of course,
                given
                that you are reading this a book about procrastination, I might assume that you are more at risk than
                resilient. You may find that your risk score is quite a bit larger than your resilience score. The
                question
                is, what can you do about this?
            </p>
            <div class="subhead">STRATEGY FOR CHANGE</div>
            <p>
                Changing our personality is challenging because it's considered enduring, but success doesn't always
                demand
                a complete personality change. We can act contrary to our traits, like introverts excelling socially.
                However, psychologists warn that this may deplete willpower. In terms of procrastination, strategic
                decisions and proactive approaches like predecesion can help, relying less on habitual responses and
                more on
                intentional actions.

            </p>
            <p>Remember the implementation intentions discussed earlier? These are intentions that take
                the form of "In situation X, I will do behavior Y."
            </p>
            <p>Implementation intentions are predecisions where you plan your response to specific stimuli
                in advance. This can be helpful in countering habitual responses linked to your personality traits. For
                example, if you tend to be impulsive, your predecision with an implementation intention might be "If an
                alternative intention arises, such as an invitation to go out, I will say that I will make my decision
                in
                ten minutes."This built-in predecisional delay may help to counteract the typical impulsive response to
                just
                get going. I think it is clear by now that the key issue is this predecision. Knowing a little bit about
                your personality traits that may put you at risk to procrastinate, you can now act on that knowledge by
                deciding in advance how you will counter this habitual response.. If you're impulsive, minimizing
                distractions before work becomes part of your predecisional process to enhance focus.
            </p>
            <p>Similarly, if you tend to be disorganized, deliberately working on structuring tasks can be
                very important to reducing procrastination. This can be as simple as creating a "to do" list of subtasks
                that help you see the steps you need to take. It can also be the more challenging job of organizing your
                ork
                area so that it is not so cluttered. But be careful: Some of us use this tidy-up job as our way to
                procrastinate! Once the desk is tidied, pencils sharpened, and new software downloaded onto the
                computer, we
                think, "That's enough or today!" Procrastination draws on our ability to deceive ourselves. We find
                excuses
                for just about any unnecessary delay.
            </p>
            <p>We discussed about Impulsivity and Conscientiousness. What about the worry and anxiety and
                define low emotional stability? What if we are worried that we don't have the ability to do the task?
                What
                if we cannot tolerate frustration? this seems more serious right?
            </p>
            <p>We discussed about Impulsivity and Conscientiousness. What about the worry and anxiety and
                define low emotional stability? What if we are worried that we don't have the ability to do the task?
                What
                if we cannot tolerate frustration? this seems more serious right?
            </p>
            <p>
                Some people tend to worry and be self-conscious, leading to irrational beliefs that contribute to
                procrastination, often rooted in a fear of failure. To change these patterns, both short-term behavior
                and
                long-term personality change involve challenging these worries and beliefs when they emerge. When a task
                triggers thoughts such as "I can't do this," "I'm such a screwup," "I don't know how," "I'm going to
                fail,"
                it's absolutely essential that you challenge each of these beliefs. Why do you think they are true? What
                is
                the real risk of not succeeding when you try? Through this process, most of us realize that these are
                truly
                irrational thoughts, perhaps part of the habits we
                call personality, but not real in terms of the world around us.
            </p>
            <p>Stable personality traits can influence procrastination, and while changing these traits is
                challenging, recognizing our self-regulatory strengths and limitations allows us to act proactively and
                consciously, even if it means stepping out of our usual character to achieve our goals.
            </p>
            <p>Perhaps most important to understand is that personality should not be an excuse. In fact,
                acknowledging and addressing our limitations can develop some of our greatest strengths.
            </p>
            <p>An Another Deep Message of Procrastination displayed below from the book:</p>
            <div class="comic">
                <img src="08_08.jpg" alt="">
            </div>
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
            <form action="solving_09.php" method="POST">
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