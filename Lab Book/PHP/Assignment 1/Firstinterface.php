<?php
define('PI','3.14');
interface FirstInterface {
	public function area();
	public function volume();
}

class Cylinder implements FirstInterface {
	public $a,$v;
	public $r;
	public $h;

	function__construct($r,$h) {
		$this->r=$r;
		$this->h=$h;
	}

	function area() {
   		$a=2*PI*$this->r*($this->r+$this->h);
		echo"<br> Area Of Cylinder=".$a;
	}

	function volume() {
		$v=PI*$this->r*this->r*$this->h;
		echo"<br> Volume Of Cylinder=".$v;
	}
}

$o1= new cylinder(4,8);
$o1->area();
$o1-volume();
?>