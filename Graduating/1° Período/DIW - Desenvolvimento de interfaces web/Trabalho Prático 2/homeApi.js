async function fetchPopular() {
    const endpointHome = "https://api.themoviedb.org/3/movie/popular?api_key=678bb00de0cb7041f1a2b0182462c69b&language=pt-BR&page=1";
    const response = await fetch(endpointHome);
    const { results } = await response.json();
    return results;
}