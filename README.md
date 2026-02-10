<div align="center">
  <img src="logo.png" width="200px">
  <br>
  <b>cauqui</b>
</div>

---

## Sobre o cauqui

A calculadora mais simples do mundo escrita em C. Sem operações inúteis, sem inchaço. Uma calculadora que você realmente vai querer usar na sua vida!

---

## Pré-requisitos
Para poder instalar o cauqui, você precisará do LLVM Clang e make instalado no seu sistema. Ele é o programa que irá ser usado para compilar o cauqui. Se você não tiver ele instalado, rode esses comandos, de acordo com qual gerenciador de pacotes você usa:

<details>
<summary>Debian e derivados</summary>
<pre><code>sudo apt update
sudo apt install clang make</code></pre>
</details>

<details>
<summary>Arch Linux e derivados</summary>
<pre><code>
sudo pacman -Sy clang make
</code></pre>
</details>

<details>
<summary>Gentoo e derivados</summary>
<pre><code>sudo emerge --ask llvm-core/clang sys-devel/make
sudo emaint -a sync
</code></pre>
</details>

<details>
<summary>Void Linux e derivados</summary>
<pre><code>sudo xbps-install -S
sudo xbps-install clang make</code></pre>
</details>

<details>
<summary>Fedora/RHEL e derivados</summary>
<pre><code>sudo dnf update
sudo dnf install clang make</code></pre>
</details>

<details>
<summary>OpenSUSE e derivados</summary>
<pre><code>sudo zypper refresh
sudo zypper install clang make</code></pre>
</details>

<details>
<summary>Alpine Linux e derivados</summary>
<pre><code>doas apk update
doas apk add clang make</code></pre>
</details>

<details>
<summary>Slackware e derivados</summary>
<pre><code>slackpkg update
slackpkg install clang make </code></pre>
</details>

<details>
<summary>FreeBSD e derivados</summary>
<pre><code>
sudo pkg update
sudo pkg install clang gmake</code></pre>
</details>

Nota: A instalação do LLVM Clang, que é a ferramenta necessária para poder compilar o cauqui é diferente no Windows. Recomendo ver <a href="https://youtube.com/watch?v=3ov8OqSxlXc">Este tutorial</a>.

---

## Compilação e instalação
Felizmente, a compilação do cauqui é extremamente fácil. Apenas rode este comando (sem o cifrão):
```bash
$ make
```
Alternativamente, para compilar, instalar e remover alguns arquivos que não são mais necessários, rode isso como root (sem o jogo da velha):
```bash
# make clean install
```
---

## Pra quê esse nome?
Se você falar cauqui em voz alta, vai perceber que parece com a palavra em inglês calc, que é uma versão simplificada da palavra calculator.
