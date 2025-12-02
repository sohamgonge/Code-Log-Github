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
    <meta name="description" content="Explore free book summaries on various topics including psychology, productivity, finance, and self-improvement at ReadwithSoham's library.">
    <meta name="keywords" content="free summaries, book summaries, psychology, productivity, finance, self-improvement, Readwith Soham, library">
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
    <title>Library | ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">
    <link rel="stylesheet" href="library.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://readwithsoham.in/library.php">
    <style>
        /* Your CSS styles here */
        .selected {
            color: #f9532d;

            /* Highlight color */
            @media (min-width: 1073px) {
                footer {
                    position: fixed;
                }
            }
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
                <li><a href="index.php" style="--navAni:1">Home</a></li>
                <li><a href="about.php" style="--navAni:2">About</a></li>
                <li><a href="library.php" style="--navAni:3" class="active">Library</a></li>
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
        <div class="options">
            <p id="firstelement">Free Summaries | </p>
            <ul class="navigations">
                <li class="linkopt"><a href="#" class="category selected" data-category="All">All</a></li>
                <li class="linkopt"><a href="#" class="category" data-category="Psychology">Psychology</a></li>
                <li class="linkopt"><a href="#" class="category" data-category="Productivity">Productivity</a></li>
                <li class="linkopt"><a href="#" class="category" data-category="Finance">Finance</a></li>
                <li class="linkopt"><a href="#" class="category" data-category="Self-Improvement">Self-Improvement</a>
                </li>
            </ul>
        </div>
        <hr style="width:95% ; color: black; margin-left: auto; margin-right: auto;">
        <div class="library">
            <div class="grid">
                <a class="image-link Psychology" href="cheese_01.php">
                    <img src="Who_Moved.png" alt="Image 1">
                </a>

                <a class="image-link Psychology comming" href="#">
                    <img src="Subconsious.png" alt="Image 2">
                </a>
                <a class="image-link Finance comming" href="#">
                    <img src="Little.png" alt="Image 1">
                </a>

                <a class="image-link Finance comming" href="#">
                    <img src="Screenshot 2023-12-01 204238.png" alt="Image 2">
                </a>
                <a class="image-link Self-Improvement comming" href="#">
                    <img src="rules.png" alt="Image 1">
                </a>
                <a class="image-link Productivity comming" href="#">
                    <img src="One.png" alt="Image 1">
                </a>

                <a class="image-link Productivity comming" href="#">
                    <img src="deep.png" alt="Image 2">
                </a>

                <a class="image-link Productivity" href="solving_01.php">
                    <img src="solving.png" alt="Image 2">
                </a>
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

    <script src="https://unpkg.com/typed.js@2.1.0/dist/typed.umd.js"></script>
    <script>
        var typed = new Typed('#typed', {
            strings: ['Learner', 'Seeker', 'Thinker'],
            typeSpeed: 50,
            loop: true, // Enable looping
            loopCount: Infinity // Set loop count to infinity
        });
    </script>
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
    <script>
        // JavaScript code here
        document.querySelectorAll('.category').forEach(item => {
            item.addEventListener('click', event => {
                const category = event.target.getAttribute('data-category');
                document.querySelectorAll('.image-link').forEach(image => {
                    if (category === 'All' || image.classList.contains(category)) {
                        image.style.display = 'inline-block';
                    } else {
                        image.style.display = 'none';
                    }
                });
                document.querySelectorAll('.category').forEach(item => {
                    item.classList.remove('selected');
                });
                event.target.classList.add('selected');
                event.preventDefault(); // Prevent default link behavior
                updateHighlightedColor(); // Update highlighted color after category selection
            });
        });

        function updateHighlightedColor() {
            const selectedCategory = document.querySelector('.category.selected').getAttribute('data-category');
            document.querySelectorAll('.category').forEach(item => {
                if (item.getAttribute('data-category') === selectedCategory) {
                    item.style.color = '#f9532d'; // Highlight selected category with specified color
                } else {
                    item.style.color = ''; // Reset color for other categories
                }
            });
        }
    </script>


</body>

</html>