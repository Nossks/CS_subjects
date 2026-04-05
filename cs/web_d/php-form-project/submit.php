<?php
if ($_SERVER["REQUEST_METHOD"] === "POST") {

    $name = trim($_POST["name"]);
    $email = trim($_POST["email"]);
    $message = trim($_POST["message"]);

    $errors = [];

    // Name validation
    if (empty($name)) {
        $errors[] = "Name is required.";
    }

    // Email validation using regex or filter_var
    if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $errors[] = "Invalid email address.";
    }

    // Message length check
    if (strlen($message) < 20) {
        $errors[] = "Message must be at least 20 characters long.";
    }

    // Show results
    if (count($errors) > 0) {
        echo "<h3>Validation Errors:</h3><ul>";
        foreach ($errors as $err) {
            echo "<li>$err</li>";
        }
        echo "</ul>";
    } else {
        echo "<h3>Thank you for your feedback!</h3>";
        echo "<p><strong>Name:</strong> $name</p>";
        echo "<p><strong>Email:</strong> $email</p>";
        echo "<p><strong>Message:</strong> $message</p>";
    }

} else {
    echo "Invalid request method.";
}
?>
