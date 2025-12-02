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
    $article_title = "solving_08"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_08.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_08"; // Replace with actual article title
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
            <div class="status">Willpower: If We Only Had The Willpower</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>Rachel's exercise goal wasn't becoming a reality due to her busy schedule, with early mornings
                and a demanding job at a law firm. Despite allocating time after dinner for treadmill workouts, the
                challenges of managing family responsibilities left her feeling exhausted and lacking the motivation to
                exercise. Frustrated, she continually postponed her exercise plans, hoping for a change in her willpower and
                commitment to start the next day.
            </p>
            <div class="subhead">ISSUE</div>
            <p>Willpower is a limited resource. Many of us know this from experience. Roy Baumeister (Florida
                State University), along with his students and colleagues, has demonstrated this in a series of clever
                experiments. It is worth reviewing these to make the point.
            </p>
            <p>In the typical experiment, research participants are randomly assigned to one of two
                groups. Both groups expect that they will participate in two tasks, but there is an important difference
                between the groups in terms of the self-regulation demanded of them in the first task.
            </p>
            <p>The first group is the experimental group, which will have to face self-regulation, while
                the other control group won't be required to perform self-regulation. The first task was watching a funny
                film. In this, the experimental group was not allowed to express their reactions, while the control group
                was allowed to do so. In the second task, the research participants who were hungry were taken to a room
                where two plates were placed: one with radishes and the other with cookies. During this task, the
                experimental group was not allowed to eat the cookies, while the control group had both as a choice, and any
                of them could be chosen.
            </p>

            <p>Once this first task is completed, both groups are asked to complete a second task that
                involves self-regulation. Participants in both groups need to self-regulate their behavior to achieve
                success, and the key outcome measure is how persistent participants in each group are. For example, typical
                second tasks include things like complex figure tracing, solving complex anagrams, drinking an unpleasant
                (but not harmful) "sports drink," and, my favorite, resisting drinking free beer (a driving test is expected
                to follow).
            </p>
            <p>The result showed that the group who had already performed self-regulation performed poorly
                in the tasks while the other group performed well because they hadn't used their willpower earlier. This
                demonstrates that willpower is limited, and that's the reason why she was unable to do exercise; she had
                exhausted her willpower.
            </p>
            <div class="subsubhead">Strengthening Our Willpower - The Role of Motivation</div>
            <p>The self-regulatory impairments I discussed in the research above are eliminated or reduced when
                participants are highly motivated to self-regulate on the second task. For example, when participants are
                paid for doing well on the second task or they are convinced that their performance will have benefits, they
                perform well despite the apparent self-regulatory exhaustion from the first task.
            </p>
            <p>These findings indicate that self-regulatory depletion may be reducing motivation. Given
                that depleted self-regulatory strength may leave us feeling "we won't succeed," "we're too tired to try," it
                will reduce our result expectancy and underdetermine our willingness to exert effort. It's not that we are
                so impaired that we cannot respond. It's that we "don't feel like it."
            </p>
            <p>Sounds familiar? "I'll feel more like it tomorrow" is a common justification for
                procrastination, reflecting our perception of current self-regulatory strength. This perception is argued to
                be somewhat illusory, linked to our motivation to exert self-regulatory effort. Procrastination occurs when
                we find it challenging to resist alternative intentions, leading us to acquiesce and give in to distractions
                rather than persisting with the original goal.
            </p>
            <div class="subhead">STRATEGIES OF CHANGE</div>

            <p>
                We feel depleted throughout the day, due to which moments arise when you may feel like, "I'm exhausted and I
                just can't do any more" or "I'll feel more like this tomorrow." However, a successful goal pursuit is past
                these momentary feelings of depletion.

            </p>
            <p>Motivation has played a role in self-regulation failure, but we must also acknowledge that
                the failure is also a result of the thought process we had. So, to focus on our goals and values, we need to
                go beyond these momentary feelings and stop going into feel good and stop trying.
            </p>
            <p>It is exactly when we say to ourselves "I'll feel more like it tomorrow" that we have to
                stop, take a breath, and think about why we intended to do the task today. Why is it important to us? What
                benefit is there in making the effort now? How will this help us achieve our goal?
            </p>

            <p>After that moment, try to accumulate, try to assemble all your will strength for one more
                step, that is to just get started, and you will be surprised when you feel that you had more strength than
                you realized. Our perception can fool us at times, and this self-deception can really be our own worst
                enemy.
            </p>
            <p>The following strategies will help you in accumulating or assembling all the willpower that
                feels like "fumes" left in your own willpower gas tank.
            </p>
            <div class="list">
                1. The "willpower is like a muscle" and so can be increased and strengthened like a muscle. Do you do a
                deadlift of 200kgs on the first day of going to the GYM? No, it is not recommended because it will tear them
                down instead of building them up. Similarly, don't start big while building willpower because that will end
                up nowhere. Instead, take small manageable steps like going for a shower while not listening to music (for
                people who do), maintaining a good posture, or using your non-dominant hand to eat. Be consistent and
                mindful of your focus. Over time, you will be strengthening your "Willpower muscle." <br>

                2. Sleep and rest well. Does it seem like you are at your limits, and you are not able to cope up? Then ask
                yourself, are you getting enough sleep? Yes, quality is what we say sometimes so as to defend the less
                amount of sleep caused by sleeping late, then you are not completely true. Quality matters but to some
                extent. After that, having quantity sleep matters, i.e., in short, having 7-8 hours of sleep is important
                for most of us to function well and to rejuvenate our self-regulation strength to its max. <br>

                3. Make sure to complete the most willpower-demanding task at the start of the day because the willpower
                automatically depreciates throughout the day, which is self-explained by the above point. <br>

                4. Stay Positive, a quote everyone may have heard of but rarely worked for it, but not this time. Find
                things, people, or events that make you feel good to replenish your willpower strength. Because positive
                emotions fix self-regulatory impairment, as seen earlier. <br>

                5. Implementation intentions, a powerful tool for bolstering willpower, involve creating specific plans for
                action. This takes the form of "In situation X, I will do behavior Y to achieve my goal Z" or "If this
                happens, then I'll do this," anticipating obstacles. These intentions embed the stimulus for action in the
                environment, turning behavior control into a non-conscious process. Studies show that the automatic nature
                of implementation intentions counters the effects of self-regulatory depletion. For instance, participants
                who formed "if...then" intentions performed as well on subsequent tasks as those who weren't depleted. This
                suggests implementation intentions can strengthen will <br>

                power, even at the end of a tiring day. Applying this to Rachel's case, having an implementation intention
                like "If the kids are in bed, then I will go directly to the treadmill" might increase her success in
                evening exercise by just getting started. <br>

                6. Willpower highly depends on the available glucose in the bloodstream. In a study by researchers, they
                divided participants into two groups, Group A and Group B, and both were served with lemonade. A was served
                with added sweeteners while group B were given sugar added in lemonade later. Both the groups were given
                some math questions to solve; the questions were tough enough for everyone for not being able to solve the
                test. Here was who gives up first, and it was found that Group B quit after 20 minutes whereas Group A
                lasted for just 8 minutes. This tells us how strongly glucose affects willpower but as a result of this,
                don't eat a lot of sugar. Also, eating sweet products like cakes or any other food may lead to an instant
                burst of energy but depreciate in the long run. So, have a proper diet, a balanced diet, keep a fruit
                (Complex carbohydrate) beside you and eat when starting to feel low. This will help you build your willpower
                by releasing small amounts of glucose for a longer time instead of an instant burst. <br>

                7. Navigating social situations can demand more self-regulation and effort than anticipated. For instance,
                acting contrary to your natural disposition or suppressing genuine reactions like screaming at your boss can
                deplete willpower. This depletion may increase the likelihood of regrettable actions or words in future
                interactions. Successful social interactions require self-regulation, making it crucial to consider the
                preceding points (1-6) for effective preparation in handling demanding social scenarios. <br>

                8. Finally, much of our ability to self-regulate depends on our motivation. Even on an empty stomach,
                exhausted from not getting enough sleep, and pushed to the limit for self-regulation, we can muster the
                willpower to continue to act appropriately. It is difficult, but it can be done, particularly if we focus on
                our values and goals to keep perspective on more than just the present moment. In doing this, we can
                transcend the immediate (and temporary) feelings we are having to keep from giving in to feeling good, which
                lies at the heart of so much self-regulatory failure. <br>
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
                <form action="solving_08.php" method="POST">
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