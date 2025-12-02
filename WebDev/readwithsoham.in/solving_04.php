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
    $article_title = "solving_04"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_04.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_04"; // Replace with actual article title
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
            <div class="status">Stop Saying Tomorrow</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>
                Before starting this chapter,

                let's go through a story about psychology.

                There is a shop in Poland which reads: "Today you pay, and tomorrow you get it for free." When the customers
                came back the next day, the shopkeeper said to read the signboard again. This is pretty much the way with
                procrastination. The tomorrow in which "I'll really feel like it" is always a day away. It never becomes
                today.
            </p>
            <p>
                As the shopkeeper explains through his sign, tomorrow never comes. In the same way, our thinking plays a
                trick with us by making us think, "I'll feel more like it tomorrow." What we need to understand, so as not
                to get tricked, is why it's not true. We will not feel more like doing it tomorrow.

            </p>
            <p>
                Studies by Dan Gilbert of Harvard University and Tim Wilson of the University of Virginia state that we are
                not very good at forecasting. (Forecasting here is not weather forecasting; rather, it is predicting our own
                future mood. Forecasting our future mood is known as affective forecasting.) This is because we are biased
                when we predict future moods with positivity or negativity. For example, a couple of years after winning a
                lottery, the happiness is the same as the happiness before winning the lottery. This is also true of people
                who suffered debilitating accidents. A few years after the accident, despite long-term effects such as
                paralysis, accident victims were about as happy as they were before this life-changing event, contrary to
                the general affective forecast that they would be much unhappier.

            </p>
            <p>
                Two concepts used in these peculiar findings are focalism and presentism. Focalism is the tendency to
                underestimate the extent to which other events will influence our thoughts and feelings in the future.
                Presentism, as you might guess, addresses the fact that we put too much emphasis on the present in our
                prediction of the future. Taken together, this means that we focus more on our current situation and how we
                feel now without enough consideration about future situations, what might happen, and how we might feel
                then.

            </p>
            <p>For example, if you are going grocery shopping for the next week after having lunch, you
                might buy less because of a lack of hunger, underestimating how much you will be eating during the week.
                Addicts who have just ingested their drug of choice will underestimate how much they will crave the drug
                later. Irrationally, we think how we are feeling now is how we will feel later. The most astonishing thing
                about this is that it is true for simple things like current and future hunger states.
            </p>
            <div class="subsubhead">
                How is this related to Procrastination?
            </div>
            <p>
                Now that we are on the same page, we need to understand how this human bias toward affective forecasting
                affects our procrastination. We focus on our current affective state with the mistaken assumption that our
                affective state at the point we expect to act on our intention will be the same as it is now.

            </p>
            <p>
                The real catch here is when we intend to do a future action; our affective state is often positive. The
                question is why? So, after thinking, we can arrive at a conclusion. This occurs mainly due to two reasons.

            </p>
            <p>
                Firstly, because we are putting in work for the future, we get the reward of feeling good, and we don't feel
                guilty. Let's consider a situation that everyone must have faced in their life. A day or week during which
                you have a lot of tasks to do, and you get confused about what to do. As a solution, you make a daily
                planner, and while planning, you schedule your tasks for the next day onwards, making the day you are
                planning an enjoyable day because your planner says you have tasks for tomorrow.

            </p>
            <p>Have you noticed the effect? Because you are over-optimistic about the future, you have now
                entered a feel-good situation.
            </p>
            <p>
                Secondly, imagining ourselves to be engaged in some future actions makes us feel good again. We like to
                imagine that we are getting things done and doing everything perfectly, but this behaviour is rationalized,
                and every day goes in the same way, ending up in procrastinating.

            </p>
            <p>We need to know and admit that there is nothing like a righteous intention now for action later
                to make us feel good. "I'll do that assignment tomorrow." "I'll write that report later." Happiness now, pay
                later (or not, as the case may be.) Unless we get better at "mental time travelling," where we can set
                intentions with clearer knowledge about how we will feel about taking action in the future, we will continue
                to be predictably irrational with our procrastination.
            </p>
            <div class="subhead">STRATEGIES FOR CHANGE</div>
            <p>We need a two-pronged approach; that is, we need to attack this habit from two different
                directions to get a grip on this habit and make sure that we act upon our intentions.
            </p>
            <div class="subsubhead">Strategy #1 - Time Travel</div>
            <p>Psychologists studying affective forecasting suggest using mental imagery to improve future
                decision-making. For instance, envisioning a vivid future, such as living on potential retirement savings,
                can motivate action. However, there are challenges: people may procrastinate in creating these mental
                images, leading to a form of second-order procrastination. Additionally, initial emotions may fade quickly,
                and the distant nature of future events, like retirement, may cause individuals to discount their importance
                and delay necessary actions. So be careful while using this.
            </p>
            <div class="subsubhead">Strategy #2 - Expect to Be Wrong and Deal with It</div>
            <p>
                This is a more effective strategy but seems like a hard-nosed one. In this, instead of trying to change
                something deeply, we just need to learn that what we are expecting is wrong. We need to acknowledge that
                what we are expecting is due to affective forecasting and that it is biased towards positivity. This
                strategy takes two forms or approaches.

            </p>
            <div class="subsubhead">Approach #1</div>
            <p>Whenever you feel like procrastinating, just stop and think, "No, that's the problem with my
                forecasting. There is a good chance I won't feel more like it tomorrow." AND it is important to add the
                following:
            </p>
            <p>"My current motivation state does not need to match my intention in order to act."
            </p>
            <p>
                This is a common misconception about goal pursuit: We believe that we have to actually feel like it. We
                don't. And to be honest, most of the tasks in our lives won't ever feel like it... ever! Here's an example:
                we think that we need a sunny day to go out for a walk or a jog, but instead, we should just wear our rain
                gear and do our task. That's what exactly an athlete does. They are not "fair-weather trainers."

            </p>
            <p>
                Similarly, acknowledging that our motivational state is neither necessary nor sufficient to ensure action,
                we can simply remind ourselves of our personal goals (a form of self-affirmation) and "just get started."
                Progress will fuel well-being and enhance goal attainment (more on this in Chapter 5).

            </p>
            <div class="subsubhead">
                Approach #2
            </div>
            <div>
                For this, imagine that tomorrow has arrived, and now you suddenly feel less happy. This is because the plan
                was made with an optimistic mood (again, this is all part of our biased affective forecasting).

            </div>
            <div>Now the thing to do is to remember approach #1, particularly how your motivational state
                does not need to match the task for you to get started right now. The strategy we are advocating is knowing
                that this is a common problem with being human. We are not good at predicting how we will feel in the
                future. We are overly optimistic, and our optimism comes crashing down when tomorrow comes. When our mood
                sours, we end up where I started in the last chapter, giving in to feel good. We procrastinate.</div>
            <p>The problem is pretty obvious, and so is its solution: Let go of the misconception that our
                motivational state must match the task at hand. In fact, research proves that attitudes follow behaviours
                more than (or at least as much as) behaviours follow your attitude and motivation change.
            </p>
            <p>This is a little bit ahead in the story; however, for now, remember the mantra: "I won't feel
                more like doing it tomorrow."</p>
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
            <form action="solving_04.php" method="POST">
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