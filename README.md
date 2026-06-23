# 📚 Sistema de Notas em C

Projeto simples desenvolvido em linguagem C para realizar o cadastro de um aluno, registrar suas notas, calcular a média final e determinar sua situação acadêmica com base em regras de aprovação.

---

## 🚀 Sobre o Projeto

Este sistema foi criado com o objetivo de praticar os fundamentos da programação estruturada utilizando a linguagem C, abordando conceitos essenciais para a formação de desenvolvedores iniciantes.

O programa solicita o nome do aluno, recebe três notas, calcula a média aritmética e informa a situação final do aluno:

- ✅ **Aprovado**
- ⚠️ **Recuperação**
- ❌ **Reprovado**

---

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Biblioteca padrão: `stdio.h`

---

## 📋 Regras de Negócio

| Média Final               | Situação     |
|--------------------------|-------------|
| Média ≥ 7,0              | Aprovado    |
| Média ≥ 5,0 e < 7,0      | Recuperação |
| Média < 5,0              | Reprovado   |

---

## 💻 Exemplo de Execução
=== SISTEMA DE NOTAS ===

Nome do aluno: João Silva
Nota 1: 8.5
Nota 2: 7.0
Nota 3: 9.0

Aluno: João Silva
Média: 8.17
Situação: APROVADO

---

## 🎯 Conceitos Praticados

Este projeto envolve os seguintes conceitos fundamentais:

- Declaração de variáveis e constantes
- Manipulação de vetores (arrays)
- Estruturas de repetição (`for`)
- Estruturas condicionais (`if`, `else if`, `else`)
- Entrada e saída de dados (`scanf`, `printf`)
- Operações matemáticas básicas
- Organização de código em linguagem C

---

## 📚 Aprendizados

Durante o desenvolvimento deste projeto, foram consolidados conhecimentos essenciais para evolução na área de desenvolvimento de software, servindo como base para estudos mais avançados, como:

- Estruturas de Dados
- Programação Orientada a Objetos
- Desenvolvimento Back-end
- Engenharia de Software

---

## ▶️ Como Executar

### 🔧 Compilar
```bash
gcc sistema_notas.c -o sistema_notas
./sistema_notas
📈 Melhorias Futuras
 Permitir cadastro de múltiplos alunos
 Calcular média da turma
 Validação de notas (0 a 10)
 Persistência de dados em arquivo
 Interface gráfica
 Geração de relatório acadêmico
👨‍💻 Autor

Alan Ferreira

Projeto desenvolvido para fins de estudo e aprimoramento das habilidades em programação utilizando a linguagem C.
