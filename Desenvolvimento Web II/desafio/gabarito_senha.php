<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>
</head>
<body>
<?php
    $senha = 123;

    if ($_POST['senha'] == $senha) {
        print 'Parabéns você acertou! <br><br>'; 
    }else{
        $filename = 'senhas_enviadas.txt';
        $handle = fopen("senhas_enviadas.txt", "a");

        echo '<br><br>';
        echo 'Senha incorreta!';

        fwrite($handle, "\n" .$_POST['senha']);
        fflush($handle);
        fclose($handle);
        
        $handle = fopen("senhas_enviadas.txt", "r");
        while (!feof($handle)) {
            $line = fgets($handle);
            echo $line ."<br>";
        }
        fclose($handle);
    }
?>

</body>
</html>