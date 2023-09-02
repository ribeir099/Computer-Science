async function fetchDetalhes(id) {
    const endpointDetalhes = `https://api.themoviedb.org/3/movie/${id}?api_key=678bb00de0cb7041f1a2b0182462c69b&language=pt-BR`
    const response = await fetch(endpointDetalhes);
    const data = await response.json();
    return data;
}