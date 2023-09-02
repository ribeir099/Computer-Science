const imageSize = "https://image.tmdb.org/t/p/w200"
const searchButton = document.querySelector('.btn-search');

async function getPopFilmes() {
    const response = await fetchPopular();
    response.forEach((filme) => {
        const titulo = filme.title;
        const resumo = filme.overview;
        const image = `${imageSize}${filme.poster_path}`
        const id = filme.id;
        const lancamento = filme.release_date;
        const nota = filme.vote_average;
        createCards(titulo, resumo, image, id, lancamento, nota);
    });
}

function createCards(titulo, resumo, image, id, lancamento, nota) {
    const container = document.querySelector('#films-cards');
    const div = document.createElement('div');
    div.className = 'card';
    div.style = 'width: 18rem;'
    div.innerHTML = `<img src="${image}" class="card-img-top card-image" alt="...">
    <div class="card-body">
      <h5 class="card-title card-film">${titulo}</h5>
      <p class="card-text card-film">${resumo}</p>
      <p class="card-text"><b>Data de Lançamento:</b> ${lancamento.split('-').reverse().join('-')}</p>
      <p class="card-text"><b>Avaliação:</b> ${nota}</p>
      <a href="/detalhes.html" id="${id}" class="btn btn-primary card-film card-button">Detalhes</a>
    </div>`
    container.appendChild(div);
}

function datailsPage(id){
    localStorage.setItem('id-film', id);
}

function listenerDetailsButtons() {
    document.addEventListener('click', (event) => {
        if (event.target.classList.contains('card-button')) {
            datailsPage(event.target.id);
        }
      }, false);
}

function saveSearch(){
    const inputSearch = document.querySelector('.input-film').value;
    localStorage.setItem('Pesquisa', inputSearch);
}

searchButton.addEventListener('click', saveSearch);

const startHome = () => {
    getPopFilmes();
    listenerDetailsButtons();
};

window.onload = startHome;
