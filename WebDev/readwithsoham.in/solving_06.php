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
    $article_title = "solving_06"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: solving_06.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "solving_06"; // Replace with actual article title
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
            <div class="status">Power Of Just Getting Started</div>
            <div class="by">
                Dr. Timothy A. Pychyl
            </div>
            <p>The author says, "My own life supplies many examples daily. When I face an aversive task, I
                simply don't want to do it—a task that I find boring and tedious, or even a task for which I have doubts
                about my competence—it's tempting to walk away. I want to procrastinate. "I'll feel more like doing this
                later." This is the flag for me. It is a signal that I have learned to identify that I am just about to
                procrastinate. At that very moment, I use this signal to just get started. I will immediately start on
                anything related to the task at hand. Let's explore why this is so important."
            </p>
            <div class="subhead">
                ISSUE
            </div>
            <p>
                Once we start a task, it's rarely as bad as we think. Starting on a task also often changes our perspective
                toward the task and ourselves in many important ways.

            </p>
            <p>In a series of studies, students were given electronic pagers to gather experience sampling
                data. The students were paged randomly throughout the day over a week or two. The pages would be like: "What
                are you doing?" "Is there something else you should be doing?" "How are you feeling?" "What are you
                thinking?" In addition to this, they were asked to rate what they were doing and what they were supposed to
                be doing on things like how stressful they perceived the task to be, on a scale of 10 where 10 is extremely
                stressful and 0 not stressful at all.
            </p>
            <p>
                As expected, on Monday when participants were avoiding some task(s) like working on an assignment in
                preference to other activities like hanging out with friends, it was found that they typically said things
                like "I'll feel more like doing that tomorrow" or "Not today. I work better under pressure." As you learned
                in the previous chapter, we rationalize the dissonance between our behavior (not doing) and our expectations
                of ourselves ("I should be doing this now"). Of course, none of them later in the week said things like "I
                feel like doing that today" or "I'm glad I waited until tonight because I work better like this."

            </p>
            <p>Surprisingly, a change in participants was noticed, their perspective toward the task
                changed throughout the week. On Monday, the dreaded, avoided task was perceived as very stressful,
                difficult, and unpleasant. On Thursday, once they had actually engaged in the task they had avoided all
                week, their perceptions changed. The ratings of task stressfulness, difficulty, and unpleasantness decreased
                significantly.
            </p>
            <p>What do we learn? Once we start a task, it is rarely as bad as we think. Many participants
                commented that when the pagers were sent at the last-minute efforts that they wished they had started
                earlier—the task was actually interesting, and they thought they could do a better job with a little more
                time.
            </p>
            <p>Just get started. That is the moral here. Once we start, our attributions of the task
                change. Based on other research, we know that our attributions about ourselves change, too. First, once we
                get started, we perceive the task as much less aversive than we do when we are avoiding it. Second, even if
                we do not finish the task, we have done something, and the next day our attributions about ourselves are not
                nearly as negative. We feel more in control and more optimistic. You might even say we have a little
                momentum.
            </p>
            <p>Research by Ken Sheldon also demonstrated that the process of achieving our goals makes an
                important difference. Process on our goals makes us feel more satisfied and happier in our lives. Also,
                instead of having the negative emotion while procrastinating, they have not just removed but rather replaced
                by the positive emotions that can motivate us to engage in goal-directed behaviors and self-regulation,
                leading to progress and goal attainment. When we make initial progress on our goals, the resulting boost in
                subjective well-being serves as a positive reinforcement, encouraging us to take further actions and make
                more progress.
            </p>
            <p>Of course, this simple advice is not the whole solution to the procrastination puzzle, but
                it is a crucial first step toward solving it and decreasing our procrastination. In the next chapter, I take
                us past this initial step.
            </p>
            <div class="subhead">STRATEGY FOR CHANGE</div>
            <p>When you find yourself thinking things like:
            </p>

            <div class="list">
                "I'll feel more like doing this tomorrow," <br>
                "I work better under pressure," <br>
                "There's lots of time left," <br>
                "I can do this in a few hours tonight"
            </div>
            <p>
                Let that be a flag or signal or stimulus to indicate that you are about to needlessly delay the task, and
                let it also be the stimulus to just get started. This is another instance of that "if... then" type of
                implementation intention. I've raised the notion of an implementation a few times already; now, look at the
                details about it. As defined in the well-developed psychology of action created by Peter Gollwitzer, an
                implementation intention supports a goal intention by setting out in advance when, where, and how we will
                achieve this goal (or at least a subgoal). This idea is also seen in the book "Atomic Habits by James
                Clear."

            </p>
            <p>
                Research suggests that specifying the details of how, when, and where we will accomplish tasks, known as
                implementation intentions, is more effective than creating a general "to-do" list. Studies by Peter
                Gollwitzer and colleagues demonstrate that implementation intentions significantly enhance the initiation
                and follow-through of behaviors, ranging from taking vitamins to engaging in regular physical activity or
                acting on environmentally conscious intentions. In essence, implementation intentions serve as a potent tool
                to bridge the gap between goal intentions and concrete actions.

            </p>
            <div class="paraimple">
                <p>
                    IF I say to myself things like "I'll feel more like doing this later" or "I don't feel like doing this
                    now," THEN I will just get started on some aspect of the task.

                </p>
            </div>
            <div class="lineim">
                <hr>
            </div>
            <p>Notice we are not using the famous Nike slogan "Just do it!" It's about just getting started.
                The "doing it" will take care of itself once we get going. By saying just doing it we might get overwhelmed
                with all there is to do. Just take a first step; that is much easier.
            </p>
            <p>While using this strategy, you might find yourself in the situation of just getting started
                many times throughout the day, even on the same task. This is common. Even in meditation, we have to gently
                bring our attention back to our focal point, whatever that may be—a breath, a mantra. The key thing to
                remember is that just getting started may happen many times in a day.
            </p>
            <p>It's not like all the procrastination gets stopped short when we just get started. It's not
                the whole solution by any means, but it's a huge and crucial first step. As is commonly said, "A job begun
                is a job half done."
            </p>
            <p>You may run away from this strategy, to criticize it because it is exactly your problem.
                You are not able to get started. Not so; you think you are not able to get started, probably because you are
                focused on your feelings (Which are negative), and you are thinking about the whole task, about "getting it
                done" as opposed to "getting started." The trick is to find something that you can get started on.
            </p>
            <p>
                Keep it really simple, keep it as concrete as possible, too. Research by Sean McCrea (University of
                Konstanz) and his colleagues has shown that thinking abstractly about our goals leads us to believe that
                they are not that urgent or pressing. More-concrete thoughts about your goal or task, more-concrete plans,
                lead to more timely action. In other words, more-concrete plans will help you to just get started.

            </p>
            <p>An implementation intention helps you get started. It is your predecision so that you do
                not get caught up in thinking, choosing, deciding. You have already made the decision. Now is the time to
                act.
            </p>

            <p>Here is a common example from an academic context: When facing a writing task, perhaps a
                term paper, it is possible to just sit and stare at a blank computer screen. As you do, anxiety builds, and
                pretty soon you are giving in to feel good. You put it off until another day, and guilt is building fast.
            </p>

            <p>Instead, get started. Write down something; maybe your name, your roll number. If you know
                the title, write that down or jot down the ideas, not necessarily sentences, but if you have ideas, write
                down the sentences. The start may seem rough, but it's how it goes—a carpenter starts with a rough frame, a
                sculptor carves and shapes rough forms into smooth ones. Farmers disk and harrow rough, plowed fields into
                fields ready for planting. We are always starting somewhere to work toward the finished product.
            </p>
            <p>You can think of this in another way, "A journey of a thousand miles begins with a single
                step." Take that first step. Just get started. It can make all the difference.
            </p>
            <p>Honestly, if you are not ready to make this first step, to just get started on a
                day-to-day, moment-to-moment basis, then close this summary now. You are not committed to change yet, and
                nothing else I have to say will matter in your self-change. Don't get me wrong, I am not trying to
                discourage you. I am just being honest.
            </p>
            <p>I will tell you more about other strategies, the role of willpower, and even the effects of
                our personalities on procrastination in upcoming chapters, but you must know that it will always come down
                to the precipitous moment when you just get started. It will always come down to that movement from not
                doing to doing. For tasks that we would rather avoid, this is a difficult but wonderful moment.
            </p>
            <p>So, we are back to where I began the chapter, with the mantra "Just get started." To this,
                I have added a couple of other phrases that you might want to use as your own personal mantra. These are:
                "Prime the pump"; "A job begun is a job half done"; and "A journey of a thousand miles begins with a single
                step."
            </p>
            <p>
                In the table provided or through a thought experiment, select a task or goal causing procrastination and
                significant concern. Enumerate as many subtasks as possible required for completing the task. Use the first
                column to designate priority or identify the subtask that makes the most sense to tackle initially. Although
                determining the next steps may not always be straightforward, the key is to initiate the process. Pick any
                task to begin, acknowledging that complete rationality might not always be feasible. Even if you need to
                navigate uncertainties, starting is crucial. Fumbling through the initial stages is acceptable, but taking
                that first step is essential. Failure to commence ensures you remain stuck. This approach is applicable to
                virtually any goal or task you encounter.

            </p>
            <p>In fact, when you just cannot seem to get started on a task, get started by breaking down
                the task into subtasks. BUT don't stop there, as tempting as it may be some days. It is true for many of us
                that after we make a list like this, we feel better and we think we have accomplished something, so we
                actually stop—another excuse for procrastination. Don't forget: The purpose of that list is to get you
                started. Just get started.
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
            <form action="solving_06.php" method="POST">
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