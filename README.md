# PLANTILLA PARA PROYECTO RAYLIB 5.0 Y VISUAL STUDIO CODE

Esta es una plantilla básica para desarrollar un juego en Raylib. La estructura del proyecto está diseñada para facilitar el desarrollo y la organización de los recursos y el código fuente.

## Estructura del Proyecto

```
.vscode/              // Configuración de Visual Studio Code
Font/                 // Carpeta para fuentes
Sprites/              // Carpeta para sprites
Sounds/               // Carpeta para sonidos
Shaders/              // Carpeta para shaders
lib/                  // Archivos .dll necesarios para compilar
src/                  // Carpeta donde irán todos los archivos de código
MakeFile              // Archivo Makefile para compilar el proyecto
AppIcon.ico           // Icono de la aplicación, reemplazar por el icono requerido
appres.rc             // Configuración para metadatos del ejecutable
```

## Archivo de Entrada

El archivo de entrada se llama `main.cpp`, pero puedes cambiarlo por el nombre que desees para tu proyecto, por ejemplo, `MiJuego.cpp`. Esto generará un ejecutable llamado `MiJuego.exe`.

## Compilación

Para compilar tu proyecto:

1. **Abre el archivo de entrada** (por ejemplo, `main.cpp` o `MiJuego.cpp`) en Visual Studio Code.
2. **Presiona F5**. Esto compilará el proyecto y generará el ejecutable específico para cualquier sistema operativo, sin necesidad de realizar pasos adicionales.

## Configuración del Entorno

### Requisitos Previos

Antes de compilar, asegúrate de tener instalados los siguientes programas y bibliotecas:

- [raylib](https://github.com/raysan5/raylib) (instalación requerida).
- Un compilador compatible con C++ (g++, clang++, etc.).
- Para Windows, asegúrate de tener las herramientas de MinGW configuradas correctamente.

### Instalación de raylib

Para instalar **raylib**, puedes seguir las instrucciones en su [página oficial](https://github.com/raysan5/raylib#installation) o utilizar un gestor de paquetes. Aquí tienes ejemplos de cómo instalarlo en diferentes plataformas:

### Compilación de Metadatos Específicos de Windows

Antes de compilar, asegúrate de modificar el archivo `appres.rc` según tus necesidades. Luego, ejecuta el siguiente comando en la terminal para generar los recursos necesarios:

```bash
windres appres.rc -o appres.rc.data --target=pe-x86-64
```

Para compilar para x32 (32 bits), utiliza el siguiente comando:

```bash
windres appres.rc -o appres.rc.data --target=pe-i386
```

## Clonar el Repositorio

Puedes clonar este repositorio utilizando el siguiente comando:

```bash
git clone https://github.com/SrIruma/RaylibTemplate.git
```

## Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo `LICENSE` para más detalles.
