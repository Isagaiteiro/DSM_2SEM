<?php
 

if($_SERVER["REQUEST_METHOD"] == "POST"){
    session_start();
    if($_POST['username'] == 'orlando' and $_POST['password'] == ''){
        $_SESSION['loggedin'] = TRUE;
        $_SESSION["username"] = '';
         header("location: cadastro.php");
    } else {
        $_SESSION['loggedin'] = FALSE;
    }
}
?>

<!DOCTYPE html>
<html lang="pt">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cadastro</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body{ font: 14px sans-serif; width: 350px; padding: 20px;}
    </style>
</head>
<body>
    <div>
        <h2>Cadastro</h2>
        <p>Cadastre as suas informações: </p>
        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <div class="form-group">
                <label>Username</label>
                <input type="text" name="username" class="form-control" value="">
                <span class="help-block"></span>
            </div>
            <div class="form-group">
                <label>CPF</label>
                <input type="text" name="document" class="form-control" value="">
                <span class="help-block"></span>
            </div>

            <div class="form-group">
                <a href="index.php" class="btn btn-danger">Cadastrar</a>
            </div>
    </div>
</body>
</html>