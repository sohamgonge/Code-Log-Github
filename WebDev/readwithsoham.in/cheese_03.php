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
    $article_title = "cheese_02"; // Set the title of your article

    // Insert comment into database
    $sql = "INSERT INTO comments (user_id, user_name, content, article_title) VALUES (?, ?, ?, ?)";
    $stmt = $con->prepare($sql);

    // Bind parameters and execute
    $stmt->bind_param("ssss", $user_id, $user_name, $content, $article_title);
    if ($stmt->execute()) {
        // Redirect to the same page after successful comment submission
        header("Location: cheese_03.php");
        exit();
    } else {
        // Handle error
        echo "Error: " . $stmt->error;
    }
}

// Fetch comments for the current article (if needed)
$article_title = "cheese_03"; // Replace with actual article title
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
    <link rel="canonical" href="https://readwithsoham.in/cheese_03.php">
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
            <div class="status">Little People</div>
            <div class="by">
                Spencer Johnson
            </div>
            <p class="para">
                For the little people, cheese was everything. Both Hem and Haw pondered for a long time on what to do next but ended up doing nothing, just wandering around Station C. They clung to the belief that they would somehow retrieve the cheese. While Sniff and Scurry actively searched for it, Hem and Haw fumed with frustration, thinking, "This isn't fair, it can't be happening." Their minds were consumed by these thoughts, leaving no room for anything else. Haw sank into depression as his mind spun with worries about the future without the cheese. Hungry and exhausted, Hem and Haw returned to their nests. They wrote on the walls, "The More Important Your Cheese Is to You The More You Want To Hold On To It." This means you will work harder if the cheese for you is more important. The next morning, they returned to Station C, still hoping to find even a morsel of cheese. But there was nothing left. Then, Haw suggested seeking advice from Sniff and Scurry. "What could they possibly know?" Hem scoffed. "We're smarter than those mice."
            </p>
            <p class="parainden">
                Haw responded, "We might be smart, but right now, we're not being smart. Cheese is changing, and we need to change too." "What do you mean?" asked Hem, thinking they were special and entitled to the cheese. "We didn't cause this problem; someone else did," Hem explained.Haw to this replied "We need to take action."
            </p>
            <p class="parainden">
                Haw thought they should take action instead of overanalyzing the problem. But Hem grew angry, declaring, "I'm going to get to the bottom of this." While they wandered in Station C, Sniff and Scurry ventured deep into the maze and discovered a new place: Station N. They danced with joy upon finding. Station N was overflowing with cheese, it wasn't like anything they'd ever seen before.
            </p>
            <p class="parainden">
                In Station C, Hem and Haw were still consumed by anger and frustration. Haw believed they needed to take action. In his mind, Haw envisioned himself having an adventure in the maze and enjoying some cheese. The thought of cheese motivated him greatly.
            </p>

            <p class="parainden"><i>"Let's go" Haw said loudly, with enthusiasm.</i></p>
            <p class="parainden">
                "No, I want to stay here." Hem said. He was into the habit of station C now, he was affaraid of going outside station C. But Haw kept on motivating him, afterall they have been searching and wandering in the maze earlier too why not this time. But it was nearly impossible to convience Hem. He said, he is now old, so he don't want to make fun of himself by going out. He wanted to stay in the same way as he was earlier, full of tension, frustation and excuses. But Haw was thinking different,"If we don't move out of here, nothing will change" "Why don't you stay here maybe cheese comes back", said Hem, he was affraid of exploring by going out, but Haw had now understood that cheese would never return back to station C they now need to find new source of cheese, Hem scared him by saying,"Weather you get the cheese or not but you may not be able to find way back here, What if there is no cheese out there?" Haw knew this, but imagining himself venturing for cheese was an exciting thing for him. "Who knows, maybe I'll find my way back even if I get lost."
            </p>
            <p class="parainden">
                He saw himself eating Swiss cheese with holes in it, bright orange Cheddar and American cheeses, Italian Mozzarella and wonderfully soft French or some Camembert Cheese. Thinking of this led to a wattery mouth. "Sometimes, Hem, things change and they never the same again. This looks like one of those times. That's life!. And so should we." Haw poured all his energy to convince Hem but he didn't listened to him, and with this Haw moved on. Haw was now feeling more alive, while situation was different but he laughed on himself. He then shouted louly,"It's.... maze.... time." Before leaving he did something, Haw picked up a small, sharp rock and wrote a serious thought on the wall.
            </p>
            <p class="parainden"><i>"If You Do Not Change, You Can Become Extinct."</i></p>
            <p class="para">
                Haw remembered his depression days. He thought how could he stay there for such a long time why did i asked "Who moved my cheese?" instead "Why didn't I get up and move with the cheese, sooner. That's why he decided that if he ever got the chance again, he would get out of his comfort zone and adapt to change sooner. It would make things easier."
            </p>
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
            <form action="cheese_03.php" method="POST">
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