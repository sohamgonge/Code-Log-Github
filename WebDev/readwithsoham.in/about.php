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
    <meta name="description" content="Discover the profound insights and summaries of books at ReadWithSoham. Join Soham on a journey of exploration and personal growth through literature.">
    <meta name="keywords" content="ReadWithSoham, book summaries, literature, personal growth">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="robots" content="index, follow">

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
    <title>About | ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">
    <link rel="stylesheet" href="about.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://yourwebsite.com/about.php">
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
                <li><a href="index.php" style="--navAni:1">Home</a></li>
                <li><a href="about.php" class="active" style="--navAni:2">About</a></li>
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
        <div class="about">
            Welcome to ReadWithSoham
        </div>
        <div class="paras">
            <p></p>
            Do you ever find yourself amazed by the profound lessons hidden within the pages of a book? Hi, I'm Soham,
            the founder of ReadWithSoham, and I was just like you. As I delved into the world of literature, I
            discovered that even the simplest aspects of life held deep meaning and significance.
            </p>
            <p>
                It was this revelation that sparked the idea for ReadWithSoham. As someone who initially relied on book
                summaries to explore new ideas and concepts, I understand the value they offer to readers who may not
                have the time to dive into every book. However, I also noticed that many summaries lacked depth, leaving
                out crucial insights that could truly enrich the reader's experience.
            </p>
            <p></p>
            Driven by my passion for sharing knowledge and empowering others, I set out to fill this gap. At
            ReadWithSoham, you'll find more than just summaries; you'll discover carefully crafted insights that capture
            the essence of each book, illuminating the hidden gems that might otherwise be overlooked.
            </p>
            <p>
                But ReadWithSoham is more than just a collection of summaries. It's a journey—a journey of exploration,
                enlightenment, and personal growth. Whether you're a seasoned bookworm or just beginning your literary
                adventure, there's something here for everyone.
            </p>
            <p>
                So, come join me as we embark on this quest for knowledge and understanding. Together, let's uncover the
                beauty and wisdom that lie within the pages of every book.
            </p>
            <div class="salutation">
                Happy reading!
            </div>
            <div class="salutation" style="padding-bottom: 15px;">
                ~Soham
            </div>
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