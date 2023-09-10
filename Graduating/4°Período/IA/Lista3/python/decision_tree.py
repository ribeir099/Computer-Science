"""
    Esse codigo em python esta com os prints comentados.
    Tendo em vista que esse codigo é so para ter uma noção de em quanto tempo
    o codigo demorou para rodar, se quiser, descomente os prints para ver a 
    saida no terminal.

"""


## Importando as bibliotecas do projeto

import pandas as pd
from chefboost import Chefboost as chef


df = pd.read_csv('../data.csv', sep=';')

# Configurando o e gerando o modelo para rodar o algoritmo ID3

config = {'algorithm': 'ID3'}
model = chef.fit(df, config = config, target_label = 'Risco')

# Configurando o e gerando o modelo para rodar o algoritmo C4.5

config = {'algorithm': 'C4.5'}
model = chef.fit(df, config = config, target_label = 'Risco')
