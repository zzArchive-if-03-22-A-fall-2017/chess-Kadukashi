/** @file mainpage.h
* @brief Beschreibung der Aufgabe Chess.
*/
/** @mainpage Chess
*
* @author Peter Bauer
*
* @section intro Einführung
* Sie haben die Aufgabe einige grundlegende Schachfunktionen zu implementieren. Wir
* beschränken uns auf Verwaltungsfunktionen (Initialisieren, Schachfiguren auf dem
* Brett zu platzieren, etc.) und erste Überlegungen, wie sich Schachfiguren
* gegenseitig bedrohen können (Teilen zwei verschiedene Felder eine Zugbahn einer
* bestimmten Schachfigur?).
*
* @section basics Grundsätzliches
* Schach wird auf einem quadratischen Brett mit acht Spalten (files, mit den Buchstaben
* "a" bis "h" bezeichnet) und acht Zeilen (ranks, mit den Ziffern 1 bis 8 bezeichnet) gespielt.
* Ein Feld (square) ist somit mit der Kombination eines file-Bezeichners und eines rank-Bezeichners
* eindeutig bestimmt. Viele der zu implementierenden Funktionen werden mit diesen Postionen
* zu tun haben.
*
* Zur Illustration ist hier nochmal ein Schachbrett abgebildet:
* <img src="../chess_board_blank.gif"/>
*
* Da die vorgegebenen Datentypen auf Englisch bezeichnet sind, hier nochmal die Übersetzung
* der wichtigsten Begriffe:
* <table>
* <tr><th>Englisch</th><th>Deutsch</th></tr>
* <tr><td>Chess board</td><td>Schachbrett</td></tr>
* <tr><td>Square</td><td>Feld</td></tr>
* <tr><td>File</td><td>Spalte</td></tr>
* <tr><td>Rank</td><td>Zeile</td></tr>
* <tr><td>to capture</td><td>schlagen</td></tr>
* <tr><td>Pawn</td><td>Bauer</td></tr>
* <tr><td>Rook</td><td>Turm</td></tr>
* <tr><td>Knight</td><td>Springer</td></tr>
* <tr><td>Bishop</td><td>L&auml;ufer</td></tr>
* <tr><td>Queen</td><td>Dame</td></tr>
* <tr><td>King</td><td>K&ouml;nig</td></tr>
* </table>
*
* @section usage Verwendung des Projektes
* @subsection call Aufruf
* Sie k&ouml;nnen nach einem erfolgreichen Build das Programm auf folgende Weisen aufrufen:
* - <pre>./chess</pre>Es wird ein Schachbrett mit den Figuren in der Startaufstellung ausgegeben.
* - <pre>./chess test</pre>Es werden die automatisierten Unit Tests ausgeführt.
*
* @subsection files Bestandteile des Projektes
* Das Projekt besteht aus folgenden Files
* - makefile: Dient zur Steuerung des make Utilities.
* - chess_main_driver.cpp: Enthält die main() Funktion, welche ein Schachbrett mit den Figuren in der Startaufstellung ausgibt.
* - chess_test_driver.cpp: Enthält die main() Funktion, welche ein Schachbrett mit den Figuren in der Startaufstellung ausgibt.
* - test_chess.h: Enthält alle Prototypen der Testfunktionen.
* - test_chess.cpp: Enthält alle Implementierung der Testfunktionen und einige generell
* für die Testfunktionen gebrauchte Daten.
* - chess.h: Enthält die Datenstrukturen, welche in diesem Projekt verwendet werden und die
* Prototypen der Funktionen, welche Sie implementieren müssen.
* - chess.cpp: Enthält Leerimplementierungen der Funktionen, die Sie implementieren m&uuml;ssen.
* - general.h: Enth&auml;lt Macro-Definitionen f&uuml;r MIN und MAX.
* - shortcut.h, shortcut.cpp: Enthalten Funktionen, zur Ausf&uuml;hrung der automatisierten Tests. Sie
* m&uuml;ssen diese Files nicht weiter beachten.
* - chess_printer.h und chess_printer.c: Enthalten Funktionen, zur Darstellung eines Schachfeldes
* in einem ASCII Terminal. Ist f&uuml;r Ihre Arbeit nicht von Bedeutung.
* - mainpage.h, Doxyfile: Files, zur Erstellung der Dokumentation, die Sie gerade lesen. Diese
* Files m&uuml;ssen Sie nicht weiter beachten.
*
*/
