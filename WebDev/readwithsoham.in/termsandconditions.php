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
    <meta name="description" content="Terms and Conditions of Service provided by Read with Soham. These terms govern your use of the Service.">
    <meta name="keywords" content="terms and conditions, service terms, website terms, Read with Soham">
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
    <title>Terms and Conditions | ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://readwithsoham.in/termsandconditions.php">
    <style>
        main {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 20px;
        }

        main h1 {
            text-align: center;
            margin-bottom: 20px;
        }

        main h2 {
            margin-top: 20px;
        }

        main p,
        ul {
            margin-bottom: 20px;
        }

        main ul {
            list-style-type: square;
            padding-left: 20px;
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
        <h1>Terms and Conditions</h1>

        <p><strong>Read with Soham</strong> ("the Website") is pleased to provide access to its Service delivered via
            its online platform. These terms govern your use and our provision of Service provided by Read with Soham.
            PLEASE READ THESE TERMS CAREFULLY BEFORE USING Our Service. Read with Soham enterprise, corporate identity
            number [Insert Corporate Identity Number], email address: [Insert Email Address] provides a free digital
            subscription Service through which You as a user can access text summaries and other content ("Service").
            These terms of use ("Terms") apply when You use Service. Use of Service is available only to persons who can
            form a legally binding contract. By accessing or using Service, You agree to be bound by these Terms. If You
            do not agree, You should not use or access Our Website.</p>

        <h2>SERVICE</h2>

        <ul>
            <li>Use of Service includes accessing text summaries and other content made available through Read with
                Soham.</li>
            <li>The content offered within Service may vary.</li>
            <li>In order to use Service, You need an internet-connected device. Read with Soham reserves the right to
                modify the technical requirements for using Service.</li>
        </ul>

        <h2>FREE ACCESS</h2>

        <ul>
            <li>Service is available for free to all users.</li>
        </ul>

        <h2>PRICES AND PAYMENTS</h2>

        <ul>
            <li>Since Service is free, there are no payment obligations.</li>
        </ul>

        <h2>CANCELLATION</h2>

        <ul>
            <li>Since Service is free, there is no subscription to cancel.</li>
        </ul>

        <h2>INTELLECTUAL PROPERTY RIGHTS</h2>

        <ul>
            <li>Service is for Your personal, non-commercial use.</li>
            <li>The content on the Website is the copyrighted property of Read with Soham. No element of Service may be
                used or exploited in any way other than as part of the Service offered to You.</li>
        </ul>

        <h2>CONTENT AND SOFTWARE LICENSE</h2>

        <ul>
            <li>If Service is configured to enable the use of software, content, virtual items, or other materials owned
                or licensed by us, we grant You a limited, revocable, non-exclusive, non-sublicensable, non-transferable
                license to access and use such software, content, virtual item, or other material for Your personal,
                noncommercial use only.</li>
            <li>You agree not to copy, reproduce, duplicate, modify, create derivative works from, display, publish,
                distribute, disseminate, broadcast, transmit, sell, rent, lease, lend, sublicense, or circulate or
                otherwise exploit for any purpose (commercial or otherwise) any material and/or part of or all of
                Service to any third party (including, without limitation, the display and distribution of the material
                via a third-party website/application) without the express prior written consent of Read with Soham.
            </li>
        </ul>

        <h2>DURATION AND TERMINATION</h2>

        <ul>
            <li>The subscription for Service continues indefinitely.</li>
            <li>Service may be terminated by the user at any time.</li>
        </ul>

        <h2>Read with Soham'S RIGHTS AND RESPONSIBILITIES</h2>

        <ul>
            <li>Read with Soham reserves the right to change prices and/or these Terms.</li>
            <li>Read with Soham may contact the user by post, telephone, SMS, MMS, email, or directly via Service
                regarding promotions, changes, or anything that is related to Service in accordance with Read with
                Soham’s privacy policy.</li>
        </ul>

        <h2>THE USER'S RIGHTS AND RESPONSIBILITIES</h2>

        <ul>
            <li>The user may access text summaries and other content for private use only.</li>
            <li>The user may not disseminate text summaries and other content by, for example, copying, lending, or
                hiring out such material.</li>
            <li>The user undertakes not to circumvent or to attempt to circumvent the technical limitations in place to
                prevent copying of the contents in Service and not to copy, either in whole or in part, text summaries
                and other content, even for private use.</li>
        </ul>

        <h2>THIRD PARTY HYPERLINKS</h2>

        <ul>
            <li>The appearance of external hyperlinks and/or other elements generated by third parties on this site does
                not constitute endorsement by Read with Soham and/or its affiliate companies of the opinions or views
                expressed by such third parties’ websites.</li>
        </ul>

        <h2>THIRD PARTY SERVICES AND CONTENT</h2>

        <ul>
            <li>The Services may integrate, be integrated into, or be provided in connection with third-party services
                and content.</li>
        </ul>

        <h2>MOBILE NETWORKS</h2>

        <ul>
            <li>When You access Service through a mobile network, Your network or roaming provider’s messaging, data,
                and other rates and fees will apply.</li>
        </ul>

        <h2>PRODUCT AND PRICING INFORMATION</h2>

        <ul>
            <li>While we strive to provide accurate product and pricing information, pricing or typographical errors may
                occur.</li>
        </ul>

        <h2>SECURITY</h2>

        <ul>
            <li>We do not use vulnerability scanning and/or scanning to PCI standards, and We use regular Malware
                Scanning.</li>
            <li>We only provide articles and information. We never ask for credit card numbers.</li>
        </ul>

        <h2>SHARING & DISCLOSURE</h2>

        <ul>
            <li>We do not sell, trade, rent or otherwise transfer to third parties, Your Personal Information.</li>
        </ul>

        <h2>MISCELLANEOUS</h2>

        <ul>
            <li>Service is provided "as is" and We disclaim all conditions, representations, and warranties not
                expressly set out in these terms.</li>
            <li>Unless otherwise specified, Service is presented solely for the purpose of consuming entertainment and
                for other similar purposes in accordance with the laws of India.</li>
            <li>Arbitration, Governing Law and Jurisdiction. The Terms shall be governed by the laws of India.</li>
            <li>Read with Soham has the right to temporarily suspend or terminate the contract with the user (i.e.
                Service) with immediate effect if there are reasons to suspect that the user has violated the Terms or
                any applicable laws, rules, and regulations.</li>
        </ul>

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
                <div class="three"><a href="termsandconditons.php">Terms and Conditions</a></div>
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