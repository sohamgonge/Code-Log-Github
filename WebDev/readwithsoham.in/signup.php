<?php
session_start();

include("connection.php");
include("functions.php");

if ($_SERVER['REQUEST_METHOD'] == "POST") {
    // Something was posted
    $user_name = $_POST['user_name'];
    $password = $_POST['password'];
    $user_email = $_POST['user_email'];

    if (!empty($user_name) && !empty($password) && !empty($user_email) && !is_numeric($user_name)) {

        // Hash the password
        $hashed_password = password_hash($password, PASSWORD_DEFAULT);

        // Save to database
        $user_id = random_num(20);
        $query = "INSERT INTO users (user_id, user_name, password, user_email) VALUES ('$user_id', '$user_name', '$hashed_password', '$user_email')";

        mysqli_query($con, $query);

        header("Location: login.php");
        die;
    } else {
        echo '<div style="color: #ff0000; background-color: #ffe0e0; padding: 10px; margin-top:10px; margin-left:5px; margin-right:5px; border-radius: 5px;">Enter Valid Information!</div>';
    }
}
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="description" content="Sign up to create an account on our website and access exclusive features.">
    <meta name="keywords" content="sign up, register, create account, user registration">
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
    <title>Sign Up | ReadwithSoham</title>

    <!-- Stylesheets -->
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
    <link rel="stylesheet" href="index.css">
    <link rel="stylesheet" href="login.css">

    <!-- Canonical Link -->
    <link rel="canonical" href="https://readwithsoham.in/signup.php">
</head>

<body>
    <header class="container">
        <div class="page-header">
            <div class="logo">
                <a href="index.php">
                    <img id="logo" class="logo-img" style="height: 2.5rem;" src="logo.png" alt="Readwith Soham Logo">
                </a>
            </div>
            <label class="mode">
                <input type="checkbox" id="darkModeToggle">
                <i class='bx bxs-moon'></i>
            </label>
        </div>
    </header>
    <main>
        <section>
            <div id="box">
                <form method="post">
                    <h2>Sign Up</h2>

                    <div class="form-group">
                        <input id="text" type="text" name="user_name" placeholder="Username">
                        <label class="form-label">Username</label>
                    </div>

                    <div class="form-group">
                        <input id="text" type="password" name="password" placeholder="Password">
                        <label class="form-label">Password</label>
                    </div>

                    <div class="form-group">
                        <input id="text" type="email" name="user_email" placeholder="Email">
                        <label class="form-label">Email</label>
                    </div>

                    <div class="button">
                        <input id="button" type="submit" value="Sign Up">
                    </div>
                    <p class="signupbu">
                        <a href="signup.php">Click to Login</a>
                    </p>
                </form>
            </div>
        </section>
    </main>


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