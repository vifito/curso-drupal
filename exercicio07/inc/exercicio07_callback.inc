<?php
/**
 * @file
 * Exercicio 7
 */

 /**
  * Callback do menu.
  */
function exercicio07_callback() {
  global $user;
  
  $perfil = profile2_load_by_user($user->uid);
  
  $nome     = $perfil['main']->field_nome['und'][0]['value'];
  $apelidos = $perfil['main']->field_apelidos['und'][0]['value'];
  $cidade   = $perfil['main']->field_cidade['und'][0]['value'];

  $out =<<<HTML
<div class="row">
  <div class="col-md-4">Hola usuario</div>
  <div class="col-md-4">
    <p><span class="glyphicon glyphicon-user"> $nome $apelidos</span></p>
    <p><span class="glyphicon glyphicon-home"> $cidade</span></p>  
  </div>
</div>  
HTML;

  return $out;
}
