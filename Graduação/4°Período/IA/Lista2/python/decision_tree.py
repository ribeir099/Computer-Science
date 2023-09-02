'''
    Esse codigo em python esta com os prints comentados.
    Tendo em vista que esse codigo é so para ter uma noção de em quanto tempo
    o codigo demorou para rodar, se quiser, descomente os prints para ver a 
    saida no terminal.

'''


## Importando as bibliotecas do projeto

import pandas as pd
import matplotlib.pyplot as plt

## Funções que serão utilizadas ao longo do código

from sklearn.tree import DecisionTreeClassifier
from sklearn.preprocessing import LabelEncoder
from sklearn.preprocessing import OneHotEncoder
from sklearn.compose import ColumnTransformer
from sklearn.model_selection import train_test_split
from yellowbrick.classifier import ConfusionMatrix
from sklearn import tree


## Extraindo os dados do arquivo csv

base = pd.read_csv('../restaurant.csv', sep=';')

## Removendo uma coluna desnecessária da Tabela

exemplo_column = base.columns[0]
base = base.drop(exemplo_column, axis=1)

## Separando os atributos de entrada do atributo de classificação

entries_prev = base.iloc[:, 0:10].values
classification_class = base.iloc[:, 10].values

# print("Entries attributes:", end='\n\n')
# print(entries_prev, end='\n\n')
# print("Classification attributes:", end='\n\n')
# print(classification_class)

## Transformando os atributos de entrada qualitativos ordinais em numéricos

entries_prev[:,0] = LabelEncoder().fit_transform(entries_prev[:,0])
entries_prev[:,1] = LabelEncoder().fit_transform(entries_prev[:,1])
entries_prev[:,2] = LabelEncoder().fit_transform(entries_prev[:,2])
entries_prev[:,3] = LabelEncoder().fit_transform(entries_prev[:,3])
entries_prev[:,4] = LabelEncoder().fit_transform(entries_prev[:,4])
entries_prev[:,5] = LabelEncoder().fit_transform(entries_prev[:,5])
entries_prev[:,6] = LabelEncoder().fit_transform(entries_prev[:,6])
entries_prev[:,7] = LabelEncoder().fit_transform(entries_prev[:,7])
entries_prev[:,9] = LabelEncoder().fit_transform(entries_prev[:,9])

# print(entries_prev)

## Utilizando o OneHotEncoder para transformar os atributos qualitativos nominais em numéricos

onehotencoder_restaurante = ColumnTransformer(transformers=[('OneHot', OneHotEncoder(), [8])], remainder='passthrough')
entries_prev= onehotencoder_restaurante.fit_transform(entries_prev)

# print(entries_prev, end='\n\n')
# print(entries_prev.shape)

## Dividindo os dados em treino e teste

entries_treino, entries_teste, classification_treino, classification_teste = train_test_split(entries_prev, classification_class, test_size = 0.20, random_state = 23)

# print(entries_treino.shape, end='\n\n')
# print(entries_teste.shape, end='\n\n')

## Criando o modelo de árvore de decisão

modelo = DecisionTreeClassifier(criterion='entropy')
Classification = modelo.fit(entries_treino, classification_treino)

## Testando o modelo

previsoes = modelo.predict(entries_teste)
# print("Acuracia do modelo:", accuracy_score(classification_teste, previsoes))

## Construindo a matriz de confusão do modelo

cm = ConfusionMatrix(modelo)
cm.fit(entries_treino, classification_treino)
cm.score(entries_teste, classification_teste)

## Imprimindo algumas outras metricas do modelo

# print(classification_report(classification_teste, previsoes))

## Imprimindo a arvore gerada

previsores = ['Frances', 'Hamburguer', 'Italiano', 'Tailandes', 'Alternativo', 'Bar', 'SextaSabado', 'Fome', 'Cliente', 'Preco','Chuva','Res','Tipo', 'Tempo']
plt.subplots(nrows=1, ncols=1, figsize=(8, 13))
tree.plot_tree(modelo, feature_names=previsores, class_names=modelo.classes_.tolist(), filled=True, rounded=True)
plt.savefig('arvore_decisao.png')

