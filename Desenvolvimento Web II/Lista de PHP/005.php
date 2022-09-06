<?php
/*
Escreva um script que imprima qual o maior número.
Use IF .. ELSE
*/
$a = 60;
$b = 30;
$c = 10;

if($a > $b && $a > $c){
    echo 'O número, ' . $a . ', que está na variável a, é o maior numero.' . '<br>';
}else if($b > $a && $b > $c){
    echo 'O número, ' . $b . ', que está na variável b, é o maior numero.' . '<br>';
}else{
    echo 'O número, ' . $c . ', que está na variável c, é o maior numero.' . '<br>'; 
}

?>