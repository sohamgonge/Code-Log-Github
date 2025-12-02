<?php

function check_login($con)
{
	if (isset($_SESSION['user_id'])) {
		$id = $_SESSION['user_id'];
		$query = "SELECT user_id, user_name FROM users WHERE user_id = '$id' LIMIT 1";

		$result = mysqli_query($con, $query);
		if ($result && mysqli_num_rows($result) > 0) {
			$user_data = mysqli_fetch_assoc($result);
			$_SESSION['user_name'] = $user_data['user_name']; // Set user_name session variable
			return $user_data;
		}
	}

	// Redirect to login if user_id is not set or user not found
	header("Location: login.php");
	die;
}

function random_num($length)
{

	$text = "";
	if ($length < 5) {
		$length = 5;
	}

	$len = rand(4, $length);

	for ($i = 0; $i < $len; $i++) {
		$text .= rand(0, 9);
	}

	return $text;
}

// Function to fetch comments for a specific article
function get_comments($con, $article_title)
{
	// Start the session to access session variables
	if (!isset($_SESSION)) {
		session_start();
	}

	// Check if the comment form has been submitted
	if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['comment_content'])) {
		// Check if the user is logged in
		if (!isset($_SESSION['user_id'])) {
			// Redirect user to login page if not logged in
			header("Location: login.php");
			exit(); // Terminate script execution
		}
	}

	// If user is logged in, retrieve user data
	$user_data = isset($_SESSION['user_id']) ? check_login($con) : null;

	// Prepare SQL query to fetch comments for the specified article title
	$sql = "SELECT * FROM comments WHERE article_title = ? ORDER BY created_at DESC"; // Order by created_at in descending order

	// Prepare and execute the SQL query
	$stmt = $con->prepare($sql);
	$stmt->bind_param("s", $article_title);
	$stmt->execute();

	// Get the result set from the executed query
	$result = $stmt->get_result();

	// Fetch all comments as an associative array
	$comments = $result->fetch_all(MYSQLI_ASSOC);

	// Return the fetched comments
	return $comments;
}
