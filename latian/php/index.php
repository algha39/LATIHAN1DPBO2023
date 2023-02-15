<?php
require_once('ListMhs.php');

$ListMhs1 = new ListMhs('Sekar ', 'Female');
echo $ListMhs1->getNama();
echo $ListMhs1->getNim();
echo $ListMhs1->getProdi();
echo $ListMhs1->getFakultas();
echo '<hr>';

$ListMhs2 = new ListMhs('Satria ', 'Male');
echo $ListMhs2->getNama();
echo $ListMhs2->getNim();
echo $ListMhs2->getProdi();
echo $ListMhs2->getFakultas();
echo '<hr>';

$ListMhs3 = new ListMhs('lala ', 'Male');
echo $ListMhs3->getNama();
echo $ListMhs3->getNim();
echo $ListMhs3->getProdi();
echo $ListMhs3->getFakultas();
echo '<hr>';

$ListMhs4 = new ListMhs('yaya ', 'Male');
echo $ListMhs4->getNama();
echo $ListMhs4->getNim();
echo $ListMhs4->getProdi();
echo $ListMhs4->getFakultas();
echo '<hr>';
