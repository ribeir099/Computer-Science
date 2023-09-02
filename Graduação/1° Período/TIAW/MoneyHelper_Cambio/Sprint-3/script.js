let rates;
let base;

function renderRate(currency, rate) {
  const ul = document.querySelector('#currency-list');

  const li = document.createElement('li');
  li.innerHTML = `<b>${currency}:</b> ${rate.toFixed(2)}`

  ul.appendChild(li);
}

function handleRates(rates) {
  const ratesEntries = Object.entries(rates);

  ratesEntries.forEach((entry) => {
    const [currency, rate] = entry;
    renderRate(currency, rate);
  });
}

function renderBase(base) {
  const baseTitle = document.querySelector('#base');

  baseTitle.innerText = `Valores referente a 1 ${base}`;
}

function clearCurrencyList(){
  const ul = document.querySelector('#currency-list');
  ul.innerHTML = '';
}

async function handleSearchEvent() {
  const currencyInput = document.querySelector('#currency-input');
  
  const value = currencyInput.value.toUpperCase();
  const data = await fetchCurrencies(value);
  rates = data.rates;
  base = data.base;
  clearCurrencyList();
  handleRates(rates);
  renderBase(base);
}

function getCurrencies() {
  const searchButton = document.querySelector('#search-button');
  searchButton.addEventListener('click', handleSearchEvent);
}

function saveCurrenciesListInLocalstorage(){
  const saveBtn = document.querySelector('#save-localstorage-button');

  saveBtn.addEventListener('click', () => {
    const ratesStringfy = JSON.stringify(rates);
 
    localStorage.setItem('currencyList', ratesStringfy);
  });
}

function getCurrenciesInLocalstorage(){
  const ratesStringfy2 = localStorage.getItem('currencyList');
  if(ratesStringfy2){
    const ratesInLocalStorage = JSON.parse(ratesStringfy2);
    handleRates(ratesInLocalStorage);
  }
}

async function start() {
  getCurrencies();
  saveCurrenciesListInLocalstorage();
  getCurrenciesInLocalstorage();
}

window.onload = start;