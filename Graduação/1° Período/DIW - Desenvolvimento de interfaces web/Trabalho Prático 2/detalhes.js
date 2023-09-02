const idFilme = localStorage.getItem('id-film');
const imageSize = "https://image.tmdb.org/t/p/w500";
const searchButton = document.querySelector('.btn-search');

async function getDetalhesFilme() {
    const response = await fetchDetalhes(idFilme);
    createDetalhes(response);
}

function createDetalhes({ title, overview, release_date, vote_average, backdrop_path, genres, homepage }) {
    const container = document.querySelector('#films-details');
    let generos = '';
    genres.forEach((genero) => (generos+=` - ${genero.name} - `));
    const div = document.createElement('div');
    div.innerHTML = `<div class="card bg-dark card-details">
    <img src="${imageSize}${backdrop_path}" class="card-img" alt="Imagem do filme ${title}">
    <div class="card-img-overlay card-image-content">
      <h5 class="card-title"> ${title}</h5>
      <p class="card-text"><b>Data de Lançamento:</b> ${release_date.split('-').reverse().join('-')}</p>
      <p class="card-text"><b>Gênero:</b> ${generos}</p>
      <p class="card-text"><b>Avaliação:</b> ${vote_average.toFixed(1)}</p>
      <p class="card-text"><b>Sinopse:</b> ${overview}</p>
      <a href="${homepage}" class="btn btn-primary card-film btn-detalhes">Página do filme</a>
    </div>
  </div>`
    container.appendChild(div);
}

function saveSearch(){
  const inputSearch = document.querySelector('.input-film').value;
  localStorage.setItem('Pesquisa', inputSearch);
}

searchButton.addEventListener('click', saveSearch);

const startDetails = () => {
    getDetalhesFilme();
};

window.onload = startDetails;
