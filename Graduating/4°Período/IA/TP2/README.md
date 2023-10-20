# Como rodar

## Instalando as dependências

<details>
<summary><strong>🏕️ Ambiente Virtual</strong></summary>
<br />

O Python oferece um recurso chamado de ambiente virtual, que permite sua máquina rodar diferentes tipos de projetos com diferentes versões de bibliotecas sem conflitos.
1. Criar o ambiente virtual

```bash
python3 -m venv .venv
```

2. Ativar o ambiente virtual

```bash
source .venv/bin/activate
```

3. Instalar as dependências no ambiente virtual

```bash
python3 -m pip install -r dev-requirements.txt
```

Com o seu ambiente virtual ativo, as dependências serão instaladas neste ambiente. Quando precisar desativar o ambiente virtual, execute o comando `deactivate`. Lembre-se de ativar novamente quando voltar a trabalhar no projeto.

Se o VS Code não reconhecer as dependências instaladas no ambiente virtual criado, será necessário informar o caminho do interpretador Python. Para isso, abra o VS Code e pressione `Ctrl + Shift + P` (no Mac, `Cmd + Shift + P`) e digite `Python: Select Interpreter`. Selecione o interpretador que possui o caminho `./.venv/bin/python` no nome.

</details>

<details>
<summary><strong>🖥️​ Local</strong></summary>
</br>

- Se preferir executar o projeto sem o ambiente virtual, pode abrir o arquivo `requirements.txt` e instalar manualmente as bibliotecas que estão listadas nele

</details>

## Rodando o projeto

<details>
<summary><strong>💻 Jupyter Notebook</strong></summary>
</br>

- Para rodar o projeto utilizando o jupyter notebook rode o seguinte comando

```bash
jupyter notebook decision_tree.ipynb
```
</details>

<details>
<summary><strong>🐍 Python</strong></summary>
</br>

- Para rodar o projeto utilizando o python rode o seguinte comando

```bash
python3 decision_tree.py
```
</details>


