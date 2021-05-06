<?php
class Calculator {
    private $num1;
    private $num2;

    function __construct($num1,$num2) {
        $this->num1=$num1;
        $this->num2=$num2;
    }

    function add() {
        echo "<br> Addition of 2 numbers is: " .($this->num1 + $this->num2);
    }

    function subs() {
        echo "<br> Substraction of 2 numbers is: " .($this->num1 - $this->num2);
    }

    function mul() {
        echo "<br> Multiplication of 2 numbers is: " .($this->num1 * $this->num2);
    }

    function div() {
        echo "<br> Division of 2 numbers is: " .($this->num1 / $this->num2);
    }
}

$cal = new Calculator(10, 20)
$Cal->add()
$Cal->subs()
$Cal->mul()
$Cal->div()

?>