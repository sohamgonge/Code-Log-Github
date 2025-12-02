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
    <meta name="description" content="Privacy Policy for our website outlining how we collect, use, and protect your personal information.">
    <meta name="keywords" content="privacy policy, data collection, data usage, data protection">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="robots" content="noindex, nofollow">
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
    <title>Privacy Policy | ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://readwithsoham.in/about.php">
    <style>
        main {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 20px;
        }

        main p {
            margin-bottom: 20px;
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
        <h1>Privacy Policy</h1>

        <h2>1. Introduction</h2>
        <p>This privacy policy outlines how we collect, use, and protect your personal information when you use our
            website.</p>

        <h2>2. Information We Collect</h2>
        <p>We collect personal information when you:</p>
        <ul>
            <li>Visit our website and use the Service.</li>
            <li>Subscribe to our newsletter.</li>
            <li>Report errors or contact our customer support.</li>
            <li>Participate in surveys or respond to communications from us.</li>
            <li>Provide information in public forums on our website.</li>
            <!-- Add more list items as needed -->
        </ul>

        <h2>3. Information We Do Not Collect</h2>
        <p>We do not host, display, upload, or share any sensitive information as defined by applicable law.</p>

        <!-- Include additional sections following a similar format -->

        <h2>4. How We Use Your Information</h2>
        <p>We process your Personal Information for purposes including but not limited to providing, managing, and
            customizing the Service, as well as for internal analysis, marketing, and improving our services.</p>

        <h2>5. Data Retention</h2>
        <p>We retain your Personal Information only for as long as necessary to fulfill the purposes outlined in this
            privacy policy, unless a longer retention period is required or permitted by law.</p>

        <h2>6. Data Security</h2>
        <p>We implement appropriate technical and organizational measures to protect your Personal Information from
            unauthorized access, use, or disclosure.</p>

        <h2>7. Sharing of Information</h2>
        <p>We may disclose your Personal Information to third-party service providers who assist us in providing the
            Service, as well as when required by law or to protect our legal interests.</p>

        <h2>8. Children's Privacy</h2>
        <p>Our Service is not directed to individuals under the age of 18. We do not knowingly collect Personal
            Information from children.</p>

        <!-- Add more sections as needed -->

        <h2>9. Links to External Websites</h2>
        <p>Our website may contain links to third-party websites. We are not responsible for the privacy practices or
            content of these websites.</p>

        <h2>10. Changes to the Privacy Policy</h2>
        <p>We may update this privacy policy from time to time. We will notify you of any significant changes and obtain
            your consent if required by law.</p>

        <h2>11. Contact Us</h2>
        <p>If you have any questions or concerns about our privacy policy, please contact us at <a href="mailto:gongesoham@gmail.com">gongesoham@gmail.com</a>.</p>

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