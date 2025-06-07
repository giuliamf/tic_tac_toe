# Verificação de Vencedor no Jogo da Velha

---

## 📁 Estrutura do Projeto
```bash
tic_tac_toe/
├── googletest/ # Biblioteca Google Test (subdiretório)
├── src/
│ ├── tictac.cpp # Implementação da função verificaVencedor
│ └── tictac.hpp # Declaração da função
├── test/
│ └── test_tictac.cpp # Testes automatizados com Google Test
├── Makefile # Script de build/test/cobertura
├── test_tictac.exe # Binário compilado dos testes
├── gcov.log # Log de cobertura gerado com gcov
├── cppcheck.log # Log de análise estática
├── .gitignore # Ignora arquivos temporários e de build
├── README.md # Opcional (não usado na entrega final)
└── leiame.txt # Instruções de uso e entrega
```

---

## 🛠️ Requisitos do Ambiente

- **Terminal:** MSYS2 MinGW 64-bit
- **Pacotes necessários:**

```bash
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-make mingw-w64-x86_64-gtest
```
---

## 🔨 Como Compilar

```bash
mingw32-make clean
mingw32-make
```

---
## ▶️ Como Executar os Testes
```bash
mingw32-make run
```

Você verá a execução dos 8 testes cobrindo os seguintes casos:
- Vitória de X
- Vitória de O
- Empate
- Jogo indefinido
- Jogo impossível (exemplo: duas vitórias ou contagem inválida)

---

## 📊 Como Gerar o Relatório de Cobertura
```bash
mingw32-make coverage
```

Isso executará:
- Os testes
- A extração da cobertura com ```gcov```
Arquivos gerados:
- ```tictac.cpp.gcov```: cobertura linha a linha
- ```gcov.log```: log com percentual de cobertura

Exemplo (em ```gcov.log```):
```matlab
File 'src/tictac.cpp'
Lines executed: 84.91% of 53
Creating 'tictac.cpp.gcov'
```

---

## 🧹 Como Limpar o Projeto
```bash
mingw32-make clean
```
---

## ✔️ Validações e Qualidade
- ```cppcheck```: executado (log em ```cppcheck.log```)
- ```cpplint```: aplicado (sem erros críticos)
- Testes com Google Test
- Cobertura superior a 80%
- TDD seguido com commits por etapa

---
## Observações
**Disciplina:** Técnicas de Programação 2  
**Semestre:** 2025/1  
**Aluna:** Giulia Moura Ferreira