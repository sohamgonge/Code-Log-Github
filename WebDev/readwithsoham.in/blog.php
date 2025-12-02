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
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="description" content="Explore insightful articles on meditation, time travel, and success factors of IITians.">
    <meta name="keywords" content="meditation, mindfulness, time travel, future, IITians, success">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="robots" content="index, follow">
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
    <title>Blogs | ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">
    <link rel="stylesheet" href="blog.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://readwithsoham.in/blog.php">
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
                <li><a href="blog.php" class="active" style="--navAni:4">Blog</a></li>
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
        <div class="artlink">
            <h2 class="arttitle">
                Am I Doing Meditation In A Wrong Way?
            </h2>
            <p class="descrip">
            <p class="descrip">
                Let’s Clear this there is no wrong way or right way of performing meditation.</p>
            <p class="descrip">
                While doing meditation we have heard and have been told that, “get rid of all the thought in your mind”,
                “Focus on your breath ” and many things like this.
            </p>
            <p class="descrip">
                Are they true? Yes, they are we should clear our mind and focus on our breath, but we can’t do this from
                the first day. It’s normal to have thoughts running through your mind get distracted feeling pain, and
                itching while meditating, but believe me it’s normal.</p>
            </p>
            <p id="readmore">
                <a href="meditation.php">READ MORE</a>
            </p>
        </div>
        <div class="artlink">
            <h2 class="arttitle">
                Will Anyone From Future Be Visiting Us?
            </h2>
            <p class="descrip">
                The simple answer to this question is probably no. Now, let's see why. Imagine one sunny day you are
                sitting with your friend, drinking Fanta. Consider what would happen if you hadn't been sitting together
                at the beginning of the semester; do you think you would have known each other? No. Similarly, if
                someone from the future comes to our present, which is their past, and changes something it can cause a
                problem.
            </p>
            <p id="readmore">
                <a href="future.php">READ MORE</a>
            </p>
        </div>
        <div class="artlink">
            <h2 class="arttitle">
                Why Do IITian's Succeed?
            </h2>
            <p class="descrip">
                Let's start with the basics. Humans, essentially another species of animals, initially focused on
                survival—seeking food, water, and shelter. Over time, as life became more comfortable, various
                professions emerged, including the renowned field of engineering.
            </p>
            <p id="readmore">
                <a href="IITian's.php">READ MORE</a>
            </p>
        </div>
    </main>

    <footer id="ContactUs" style="position: relative;">
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
                <div class="four"><a href="https://whatsapp.com/channel/0029VaGdTFrGzzKJcUKMSu1I" style="--socialAni:4"><i class='bx bxl-whatsapp'></i></a></div>
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