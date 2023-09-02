/*
 * Autor: Gabriel Ribeiro Souza Silva
 * Título: Representação de um Grafo Direcionado
 * Fonte: Da minha cabeça (baseado no que foi passado em aula e nos slides da materia)
 * Instruções: Considerações finais sobre a implementação no final do codigo
 *
 */

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class GrafoDirecionado {
  public static void main(String[] args) {
    Scanner scLine = new Scanner(System.in);

    System.out.print("\nDigite o nome do arquivo: ");

    String fileName = scLine.nextLine();

    scLine.close();

    try {
      Scanner scFile = new Scanner(new File(fileName));
      int verticesTotal = scFile.nextInt();
      int edgesTotal = scFile.nextInt();

      // Representacao forward star

      int[] origin = new int[edgesTotal + 1];
      int[] destination = new int[edgesTotal + 1];
      int[] pointer = new int[verticesTotal + 2];

      pointer[1] = 1;
      pointer[verticesTotal + 1] = edgesTotal + 1;

      int currentVertice = 1;
      int biggestDegreeOutput = 0;
      int biggestVerticeOutput = 0;

      // Populando o array de ponteiros para o array de origem

      for (int i = 1; i < edgesTotal + 1; i++) {
        int vertice = scFile.nextInt();
        int edge = scFile.nextInt();

        if (currentVertice != vertice) {
          pointer[vertice] = i;
          currentVertice = vertice;
        }

        origin[i] = vertice;
        destination[i] = edge;
      }

      scFile.close();

      // Calculando o maior grau de saida

      for (int i = 2; i < verticesTotal + 2; i++) {
        int currentDegree = pointer[i] - pointer[i - 1];
        if (currentDegree > biggestDegreeOutput) {
          biggestDegreeOutput = currentDegree;
          biggestVerticeOutput = i - 1;
        }
      }

      // Imprimindo o maior grau de saida e seus sucessores

      System.out.println("\nVertice with biggest output degree:");
      System.out.println("\nVertice: " + biggestVerticeOutput + " - degree: " + biggestDegreeOutput);
      System.out.println("\nYour successors: ");
      System.out.print("- ");

      for (int i = pointer[biggestVerticeOutput]; i < pointer[biggestVerticeOutput + 1]; i++) {
        System.out.print(destination[i] + " - ");
      }

      System.out.println("\n");

      // Preferei não ordenar o array de destino e fazer o novo array de pointer
      // Basicamente não irei fazer o reverse star, gastarei menos memoria mas
      // gastarei mais processamento

      // Calculando o maior grau de entrada

      int biggestDegreeInput = 0;
      int biggestVerticeInput = 1;

      for (int i = 1; i < verticesTotal + 1; i++) {
        int currentDegree = 0;

        for (int j = 1; j < edgesTotal + 1; j++) {
          if (destination[j] == i) {
            currentDegree++;
          }
        }

        if (currentDegree > biggestDegreeInput) {
          biggestDegreeInput = currentDegree;
          biggestVerticeInput = i;
        }

        currentDegree = 0;
      }

      // Imprimindo o maior grau de entrada e seus predecessores

      System.out.println("\nVertice with biggest input degree:");
      System.out.println("\nVertice: " + biggestVerticeInput + " - degree: " +
          biggestDegreeInput);
      System.out.println("\nYour predecessors: ");
      System.out.print("- ");

      for (int i = 1; i < edgesTotal + 1; i++) {
        if (destination[i] == biggestVerticeInput) {
          System.out.print(origin[i] + " - ");
        }
      }

      System.out.println("\n");

      // Representacao do reverse star

      // sortArrays(destination, origin);

      // int[] ravPointer = new int[verticesTotal + 2];

      // ravPointer[1] = 1;
      // ravPointer[verticesTotal + 1] = edgesTotal + 1;

      // currentVertice = 1;

      // for (int i = 1; i < edgesTotal + 1; i++) {
      // int vertice = destination[i];

      // if (currentVertice != vertice) {
      // ravPointer[vertice] = i;
      // currentVertice = vertice;
      // }

      // }

      // // Calculando o maior grau de entrada

      // int biggestDegreeInput = 0;
      // int biggestVerticeInput = 1;

      // for (int i = 2; i < verticesTotal + 2; i++) {
      // int currentDegree = ravPointer[i] - ravPointer[i - 1];
      // if (currentDegree > biggestDegreeInput) {
      // biggestDegreeInput = currentDegree;
      // biggestVerticeInput = i - 1;
      // }
      // }

      // // Imprimindo o maior grau de entrada e seus predecessores

      // System.out.println("\nVertice with biggest input degree:");
      // System.out.println("\nVertice: " + biggestVerticeInput + " - degree: " +
      // biggestDegreeInput);
      // System.out.println("\nYour predecessors: ");
      // System.out.print("- ");
      // for (int i = 1; i < edgesTotal + 1; i++) {
      // if (destination[i] == biggestVerticeInput) {
      // System.out.print(origin[i] + " - ");
      // }
      // }

      // System.out.println("\n");

    } catch (IOException e) {
      System.err.println("Erro ao ler o arquivo: " + e.getMessage());
    }
  }

  // Algoritimo de ordenacao por selecao

  public static void sortArrays(int[] origin, int[] destination) {
    int n = origin.length;

    for (int i = 0; i < n - 1; i++) {
      int minIndex = i;

      for (int j = i + 1; j < n; j++) {
        if (origin[j] < origin[minIndex]) {
          minIndex = j;
        }
      }

      swap(origin, i, minIndex);
      swap(destination, i, minIndex);
    }
  }

  public static void swap(int[] arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

/*
 * Considerações finais:
 * 
 * Para saber os vertices com maior grau de saida e seus sucessores foi algo
 * computacionalmente facil tendo em vista que o arquivos dos grafos ja estava
 * ordenado e informava as arestas que saiam de um vertice para outro, sendo
 * assim implementei o forward star para isso.
 * 
 * Já para saber os vertices com maior grau de entrada e seus predecessores foi
 * algo mais complicado do ponto de vista computacional. Pensando nisso elaborei
 * duas soluções possíveis para esse problema:
 * 
 * 1 - Percorrer todo o array de destino para cada vervice, para assim
 * contabilixar qual vertice possuia maior grau de entrada e apos saber qual é o
 * vertice com o maior grau de entrada percorrer todo o array de origem para
 * imprimir seus predecessores.
 * 
 * 2 - Implementar o reverse star apartir dos arrays de origem e destino ja
 * populados
 * 
 * Apos implementar essas duas soluções cheguei a conclusão que a melhor solução
 * seria a primeira, primeiramente que ela gasta menos memoria ja que não é
 * necessario popular um novo array com os ponteiros (inteiros, que representam
 * a posicao do array) para onde começa os
 * predecessores no arrya de origem. Alem disso outro fator relevante foi o
 * tempo para rodar os algoritmos no meu computador, utilizando a primeira
 * solução demorou 1m 34,3s, já utilizando a segunda demorou 8m 49,0s
 * 
 */
