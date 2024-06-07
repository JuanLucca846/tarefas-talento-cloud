document.addEventListener("DOMContentLoaded", function() {
    document.getElementById("meu-titulo").innerText = "Atividade Proz";
    document.querySelector('a[href="https://prozeducacao.com.br"]').innerText = "https://prozeducacao.com.br";
    let ul = document.getElementsByTagName('ul')[0]; 
    let conteudoUl = '<li>Uva</li>' +
                     '<li>Maça</li>' +
                     '<li>Banana</li>';  
    ul.innerHTML = conteudoUl;
    document.getElementById("lista-ordenada").innerHTML = '<li><a href="google.com">Google</a></li>' +
                                                          '<li><a href="instagram.com">Instagram</a></li>' +
                                                          '<li><a href="youtube.com">Youtube</a></li>'
});
