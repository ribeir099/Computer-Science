async function fetchSearch(id) {
    const endpointDetalhes = `https://api.themoviedb.org/3/search/movie?api_key=678bb00de0cb7041f1a2b0182462c69b&language=pt-BR&query=${id}`
    const response = await fetch(endpointDetalhes);
    const { results } = await response.json();
    return results;
}