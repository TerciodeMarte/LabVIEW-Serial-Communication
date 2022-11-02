# LabVIEW-Serial-Communication
Measuring temperature with RTD (resistance temperature detector) and Arduino using LabVIEW

## Starting 🚀

La practica consiste en medir la temperatura de una habitación que normalmente se encuentra aproximadamente a 20 ºC con una sonda PT100 de 3 hilos, para ello utilizaremos un puente de Wheatstone y mediremos la diferencia de tensión del puente con un Arduino Uno y se envían los datos a través de los pines RX y TX del Arduino a un puerto COM del ordenador y en Labview se recopilan los datos que envía el Arduino, se calcula la resistencia de la PT y la temperatura de la sala y se muestran en una gráfica.
Ademas cada 30 segundos se almacena la temperatura en una base de datos adjuntado el voltaje y la resistencia para calcular dicha temperatura y el día y la hora en la que se toma la medida.

Y para finalizar el programa se puede hacer de dos formas:
  
  Con un botón de stop que me permita parar en cualquier momento.
  Dejando el programa ejecutado hasta que pasen cinco minutos y se finalice automáticamente.

## Pre-requisites 📋

### Hardware
* [PT100](https://es.wikipedia.org/wiki/RTD) - RTD
* [Arduino](https://www.arduino.cc/) - Placa de desarrollo de circuitos electronicos Analogicos
* [Puente de Wheatstone](https://es.wikipedia.org/wiki/Puente_de_Wheatstone) - Es un circuito eléctrico que se utiliza para medir resistencias desconocidas mediante el equilibrio de los brazos del puente. 
* [Adaptador TTL-RS232](https://www.cetronic.es/sqlcommerce/disenos/plantilla1/seccion/producto/DetalleProducto.jsp?idIdioma=&idTienda=93&codProducto=151346004&cPath=1342) - Adaptador para cambiar del estándar de comunicación de un ordenador(RS232) al estándar de un Arduino(TTL).
* [Adaptador DB9-USB](https://www.amazon.es/Sabrent-DB-9-RS-232-Cable-convertidor-Prolific-CB-DB9P/dp/B00IDSM6BW/ref=pd_lpo_1?pd_rd_w=VrX5z&content-id=amzn1.sym.d229992b-4342-448b-b0e5-b51a45434c54&pf_rd_p=d229992b-4342-448b-b0e5-b51a45434c54&pf_rd_r=VTJP38HP9F0CTJ8TG04V&pd_rd_wg=Sj2ab&pd_rd_r=47375c3d-7e9b-46b8-b3b3-ccd0eff427cf&pd_rd_i=B00IDSM6BW&psc=1) - Adaptador que sirve para conectar un ordenador a otro dispositivo, actualmente se utiliza este adaptador ya que los ordenadores de fabrica no lo traen incorporado como antiguamente.

### Software


## Schematic ⚙️



## Potential problems📦


## Author ✒️


* **Albano Díez de Paulino** - *Trabajo y Documentación* - [TerciodeMarte](https://github.com/TerciodeMarte)
* **Julian Gonzalez** - *Apoyo* - [iamjuliangonzalez](https://www.instagram.com/iamjuliangonzalez/)

## Licencia 📄

Este proyecto está bajo la Licencia (GNU General Public License v3.0 ) - mira el archivo [LICENSE.md](LICENSE.md) para detalles

## Expresiones de Gratitud 🎁

* Comenta a otros sobre este proyecto 📢
* Invita una cerveza 🍺 o un café ☕ a alguien del equipo. 
* Da las gracias públicamente 🤓.

---
⌨️ con ❤️ por [TerciodeMarte](https://github.com/TerciodeMarte) 😊
