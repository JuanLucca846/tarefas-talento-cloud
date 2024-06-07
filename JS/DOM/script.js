document.addEventListener("DOMContentLoaded", function() {
    
    let titulo = document.getElementById('titulo');
    titulo.innerText = "Bem-vindo";

    let produto = document.createElement('div');
    
    let nome = "Produto";
    let descricao = "Produto Teste.";
    let preco = "R$ 1,00";

    produto.innerHTML = `
        <h1>${nome}</h1>
        <p>${descricao}</p>
        <p>Preço: ${preco}</p>
    `;
    
    document.body.appendChild(produto);
});
