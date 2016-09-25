Recursos por los que se pelean

CPU
RAM
MEMORIA

proceso != thread

Ejemplos de threads (reproductor de musica ;)
Proceso: Programa en si mismo; en distintos entornos
Thread :Dentro del Programa; en un mismo entorno de memoria
La comunicación entre threads ; es mediante una variable, comun nada del otro mundo
La comunicación entre procesos ; copy page ; Necesitas emoria compartida; en ram(shared memory) o en disco duro (txt,binario,PIPE)
Mutex: Variable corriente
Qué es shared memory?
La memoria RAM tiene la misma característica que el disco duro

chroot :cambiar de ubucación;para qué quitarle permisos al root?:
	Cuando estamos como root; puedes hacer lo que quieres, si le quitas es para que no malogres algo.Malogro todo excepto una 			
carpeta.Protegerte de tí mismo o que tenga potestad de tu entorno.
chow(er):cmabiar de propietario
chmod:

YO 	GRUPO		TODOS

1	1		1	-> LECTURA
2	2		2	   ESCRITURA
3	3		3	   EXECUTAR

(shmget int B;)
CHMOD -R(busca todo recursivo ) 333 /home/Dota
Le doy permisos a Yo Grupo Todos de Lectura y escritura; 

CHMOD -R(busca todo recursivo ) 555 /home/Dota
Le doy permisos a Yo Grupo Todos de  escritura y ejecución ;
Nadie puede leer


En la memoria RAM SE puede crear una variabl con esos permisos;Se le conoce como Shared Memory

PERMISOS
NOMBRE 
LLAVE: Solos los procesos que tengan la llave pueden accedarle
DIRECCIÓN :Ajeno a mí; el lugar donde esta la variable:


El Sheduler ve sobre procesos.
Dos procesos comparten memora, por naturaleza se da un esquema.
Uno envóa otro recibe: Productor Consumidor


./app.out


DELAY()
SLEEP()
USLEEP()

WHILE()
{
}
PROCESADOR; CONSUME RECURSOS
IMPRESICIÓN ; contentx scwith

CPU
MCU

El Reloj:
2.56 GH 2500000 /dosmillonesquinientosmill pulsaciones por segundo !!!!
procuce corriente; constante (diamante);
Para un registro de 8 bit cuandos ciclos de reloj pudes contar?
2⁸; pulsaciones =255
10 ciclos de rerol son 1/3 de la velocidad de la liz (rapidísimo);
Los contadores; hacen consultas con el linker .




TAREAAAAAA
