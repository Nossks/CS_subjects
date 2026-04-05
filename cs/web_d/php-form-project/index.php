<!DOCTYPE html>
<html>
<head>
  <title>Feedback Form</title>
</head>
<body>

  <h2>Feedback Form</h2>

  <form method="POST" action="submit.php">
    <label for="name">Name:</label><br>
    <input type="text" name="name" id="name"><br><br>

    <label for="email">Email:</label><br>
    <input type="text" name="email" id="email"><br><br>

    <label for="message">Message:</label><br>
    <textarea name="message" id="message" rows="5" cols="30"></textarea><br><br>

    <input type="submit" value="Submit">
  </form>

</body>
</html>
