> docker run -v ./java:/tmp/java -it ubuntu /bin/bash
Unable to find image 'ubuntu:latest' locally
latest: Pulling from library/ubuntu
a3679419df18: Pull complete
ed819469700f: Pull complete
e16351a257e4: Download complete
Digest: sha256:3131b4cc82a783df6c9df078f86e01819a13594b865c2cad47bd1bca2b7063bb
Status: Downloaded newer image for ubuntu:latest
root@6053d4063ea4:/# apt update; apt -y upgrade; apt install java
Get:1 http://security.ubuntu.com/ubuntu resolute-security InRelease [137 kB]
Get:2 http://archive.ubuntu.com/ubuntu resolute InRelease [136 kB]
Get:3 http://security.ubuntu.com/ubuntu resolute-security/main amd64 Packages [383 kB]
Get:4 http://archive.ubuntu.com/ubuntu resolute-updates InRelease [137 kB]
Get:5 http://security.ubuntu.com/ubuntu resolute-security/restricted amd64 Packages [315 kB]
Get:6 http://archive.ubuntu.com/ubuntu resolute-backports InRelease [136 kB]
Get:7 http://security.ubuntu.com/ubuntu resolute-security/universe amd64 Packages [173 kB]
Get:8 http://archive.ubuntu.com/ubuntu resolute/universe amd64 Packages [20.1 MB]
Get:9 http://archive.ubuntu.com/ubuntu resolute/main amd64 Packages [1874 kB]
Get:10 http://archive.ubuntu.com/ubuntu resolute/restricted amd64 Packages [189 kB]
Get:11 http://archive.ubuntu.com/ubuntu resolute/multiverse amd64 Packages [352 kB]
Get:12 http://archive.ubuntu.com/ubuntu resolute-updates/multiverse amd64 Packages [3584 B]
Get:13 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 Packages [453 kB]
Get:14 http://archive.ubuntu.com/ubuntu resolute-updates/universe amd64 Packages [263 kB]
Get:15 http://archive.ubuntu.com/ubuntu resolute-updates/restricted amd64 Packages [327 kB]
Fetched 25.0 MB in 7s (3498 kB/s)
1 package can be upgraded. Run 'apt list --upgradable' to see it.
Upgrading:
  tar

Summary:
  Upgrading: 1, Installing: 0, Removing: 0, Not Upgrading: 0
  Download size: 258 kB
  Space needed: 0 B / 1020 GB available

Get:1 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 tar amd64 1.35+dfsg-4ubuntu0.3 [258 kB]
Fetched 258 kB in 2s (141 kB/s)
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 79, <STDIN> line 1.)
debconf: falling back to frontend: Readline
debconf: unable to initialize frontend: Readline
debconf: (Can't locate Term/ReadLine.pm in @INC (you may need to install the Term::ReadLine module) (@INC entries checked: /etc/perl /usr/local/lib/x86_64-linux-gnu/perl/5.40.1 /usr/local/share/perl/5.40.1 /usr/lib/x86_64-linux-gnu/perl5/5.40 /usr/share/perl5 /usr/lib/x86_64-linux-gnu/perl-base /usr/lib/x86_64-linux-gnu/perl/5.40 /usr/share/perl/5.40 /usr/local/lib/site_perl) at /usr/share/perl5/Debconf/FrontEnd/Readline.pm line 8, <STDIN> line 1.)
debconf: falling back to frontend: Teletype
(Reading database ... 7724 files and directories currently installed.)
Preparing to unpack .../tar_1.35+dfsg-4ubuntu0.3_amd64.deb ...
Unpacking tar (1.35+dfsg-4ubuntu0.3) over (1.35+dfsg-4ubuntu0.2) ...
Setting up tar (1.35+dfsg-4ubuntu0.3) ...
Error: Unable to locate package java
root@6053d4063ea4:/# apt search java
abcl/resolute 1.9.2-2build1 all
  Common Lisp implementation in the Java Virtual Machine

actiona/resolute 3.11.1-3.1 amd64
  emulate human activity through a powerful GUI and JavaScript

activemq/resolute 5.17.6+dfsg-2 all
  Java message broker - server

adql-java/resolute 2.0~beta+ds-5 all
  Parse, manipulate and translate ADQL queries with Java

adql-java-doc/resolute 2.0~beta+ds-5 all
  Parse, manipulate and translate ADQL queries (API doc)

ant/resolute 1.10.15-1build1 all
  Java based build tool like make

ant-doc/resolute 1.10.15-1build1 all
  Java based build tool like make - API documentation and manual

ant-optional/resolute 1.10.15-1build1 all
  Java based build tool like make - optional libraries

aspectj/resolute 1.9.6-1build1 all
  aspect-oriented extension for Java - tools

aspectj-doc/resolute 1.9.6-1build1 all
  aspect-oriented extension for Java - documentation

astro-java/resolute 5.0 all
  Java packages for astronomy

astyle/resolute 3.6.12-1 amd64
  Source code indenter for C, C++, Objective-C, C#, and Java

bazel-rules-java/resolute 4.0.0-2build1 all
  Java Rules for Bazel

bsh/resolute 2.0b4-20build1 all
  Java scripting environment (BeanShell) Version 2

bsh-src/resolute 2.0b4-20build1 all
  Java scripting environment (BeanShell) Version 2 (source code)

byacc-j/resolute 1.15-2 amd64
  Berkeley YACC parser generator extended to generate Java code

ca-certificates-java/resolute 20260311 all
  Common CA certificates (JKS keystore)

capsule-nextflow/resolute 1.1.1+dfsg-1build1 all
  packaging and deployment tool for Java applications

checkstyle/resolute 8.36.1-1build1 all
  checks Java source against a coding standard

cjs/resolute 128.1-2 amd64
  Mozilla-based javascript bindings for the Cinnamon platform

cjs-tests/resolute 128.1-2 amd64
  Mozilla-based javascript bindings for the Cinnamon platform (tests)

clirr/resolute 0.6-8build1 all
  Checks Java libraries for compatibility with older releases

closure-compiler/resolute 20130227+rhino-3 all
  JavaScript optimizing compiler

cobertura/resolute 2.1.1-2build1 all
  java tool that calculates the percentage of code accessed by tests

coco-java/resolute 20110419-5build1 all
  Coco/R Compiler Generator (Java Version)

cup/resolute 0.11b-20160615-3build1 all
  LALR parser generator for Java(tm)

darcula/resolute 2018.2-3build1 all
  Dark Look and Feel for Java desktop applications

default-jdk/resolute 2:1.25-77 amd64
  Standard Java or Java compatible Development Kit

default-jdk-doc/resolute 2:1.25-77 amd64
  Standard Java or Java compatible Development Kit (documentation)

default-jdk-headless/resolute 2:1.25-77 amd64
  Standard Java or Java compatible Development Kit (headless)

default-jre/resolute 2:1.25-77 amd64
  Standard Java or Java compatible Runtime

default-jre-headless/resolute 2:1.25-77 amd64
  Standard Java or Java compatible Runtime (headless)

docbook-xsl-saxon/resolute 1.00.dfsg.1-9build1 all
  Java extensions for use with DocBook XML stylesheets (Saxon)

doclava-aosp/resolute 6.0.1+r55-1.1ubuntu3 all
  Custom Javadoc doclet by Google

duktape/resolute 2.7.0+tests-0ubuntu4 amd64
  embeddable Javascript engine

duktape-dev/resolute 2.7.0+tests-0ubuntu4 amd64
  embeddable Javascript engine, development files

eag-healpix-java/resolute 2017.09.06-2build1 all
  Handling of HEALPix sky pixellization

eag-healpix-java-doc/resolute 2017.09.06-2build1 all
  Handling of HEALPix sky pixellization (API docs)

ecj/resolute 3.35.0+eclipse4.29-2build1 all
  Eclipse Compiler for Java (command line tool)

elpa-js2-mode/resolute 0.0~git20241205.e0c3028-2build1 all
  Emacs mode for editing Javascript programs

elpa-lsp-java/resolute 0.20211124-3build1 all
  Java LSP support for emacs

emscripten/resolute 3.1.69+dfsg-4 all
  LLVM-to-JavaScript Compiler

emscripten-doc/resolute 3.1.69+dfsg-4 all
  LLVM-to-JavaScript Compiler (documentation)

enjarify/resolute 1:1.0.3-5build1 all
  translate Dalvik bytecode to equivalent Java bytecode

erlang-jinterface/resolute 1:27.3.4.6+dfsg-1 all
  Java communication tool to Erlang

esbuild/resolute 0.27.2-1 amd64
  extremely fast JavaScript bundler and minifier (program)

eslint/resolute 6.4.0~dfsg+~6.1.9-12 all
  AST-based pattern checker for JavaScript

f2j/resolute 0.8.1+dfsg-6build1 amd64
  Fortran to Java compiler

fgallery/resolute 1.9.1+ds-2build1 all
  static HTML+JavaScript photo album generator

findbugs/resolute 3.1.0~preview2-5 all
  Static java code analyzer to find bugs

fonts-mathjax/resolute 2.7.9+dfsg-1build1 all
  JavaScript display engine for LaTeX and MathML (fonts)

fonts-mathjax-extras/resolute 2.7.9+dfsg-1build1 all
  JavaScript display engine for LaTeX and MathML (extra fonts)

freeplane/resolute 1.7.10-2build1 all
  Java program for working with Mind Maps

freeplane-scripting-api/resolute 1.7.10-2build1 all
  Java program for working with Mind Maps (groovy scripting API)

games-java-dev/resolute 5build1 all
  development of games in Java

gir1.2-javascriptcoregtk-4.1/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK - GObject introspection data

gir1.2-javascriptcoregtk-6.0/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK - GObject introspection data

gjs/resolute 1.88.0-1 amd64
  Mozilla-based javascript bindings for the GNOME platform (cli tool)

gjs-tests/resolute 1.88.0-1 amd64
  Mozilla-based javascript bindings for the GNOME platform (tests)

goby-java/resolute 3.3.1+dfsg2-12 all
  next-generation sequencing data and results analysis tool

golang-github-dvsekhvalnov-jose2go-dev/resolute 1.5-1 all
  Go implementation of Javascript Object Signing and Encryption

golang-github-evanw-esbuild-dev/resolute 0.27.2-1 all
  extremely fast JavaScript bundler and minifier (library)

golang-github-gopherjs-gopherjs-dev/resolute 0.0~git20170927.0.4152256-7 all
  Go to Javascript compiler

golang-github-gopherjs-jsbuiltin-dev/resolute 0.0~git20180426.5009155-1.1 all
  GopherJS bindings for built-in JavaScript functions

golang-github-magiconair-properties-dev/resolute 1.8.7-1 all
  Java properties scanner for Go

golang-github-masahiro331-go-mvn-version-dev/resolute 0.0~git20210429.d3157d6-2 all
  Go library for parsing maven(java) package versions

golang-github-neelance-sourcemap-dev/resolute 0.0~git20151028.0.8c68805-6 all
  Javascript source map reader and writer for Go

golang-github-robertkrimen-otto-dev/resolute 0.5.1+dfsg-2 all
  JavaScript parser and interpreter in Go

golang-gopkg-square-go-jose.v1-dev/resolute 1.1.2-4 all
  Javascript Object Signing and Encryption (JOSE) for Go

gradle-apt-plugin/resolute 0.10-1.1build1 all
  Gradle plugin to use Java annotation processors

gradle-ice-builder-plugin/resolute 1.4.5-2build1 all
  Gradle plug-in for developing Ice applications in Java

groovy/resolute 2.4.21-10build1 all
  Agile dynamic language for the Java Virtual Machine

groovy-doc/resolute 2.4.21-10build1 all
  Agile dynamic language for the Java Virtual Machine (documentation)

grunt/resolute 1.6.1-2 all
  JavaScript task runner/build system/maintainer tool

hibiscus/resolute 2.12.2+dfsg-1 all
  Java online banking client using the HBCI standard

hibiscus-doc/resolute 2.12.2+dfsg-1 all
  Java online banking client using the HBCI standard - documentation package

highlight.js-doc/resolute 10.7.3+dfsg-2 all
  JavaScript library for syntax highlighting - documentation

hsqldb-utils/resolute 2.7.4-1build1 all
  Java SQL database engine (utilities)

icedtea-netx/resolute 1.8.8-4 all
  Implementation of the Java Network Launching Protocol (JNLP)

ino-headers/resolute 0.4.0-3build1 amd64
  C API to execute JavaScript code - header files

ino-headers-doc/resolute 0.4.0-3build1 all
  C API to execute JavaScript code - documentation

jameica/resolute 2.12.0+dfsg-1 all
  Run-time system for Java applications

jameica-doc/resolute 2.12.0+dfsg-1 all
  Run-time system for Java applications - documentation package

janino/resolute 3.1.12+dfsg-1build1 all
  runtime compiler for Java expressions - binary

japi-compliance-checker/resolute 2.4-3build1 all
  tool to compare compatibility of Java library API

japitools/resolute 0.9.7+git20150619-1build1 all
  Java API compatibility testing tools

jarwrapper/resolute 0.81 all
  Run executable Java .jar files

jasmin-sable/resolute 2.5.0-3build1 all
  Java class (.class) file assembler

java-common/resolute 0.77 all
  Base package for Java runtimes

java-package/resolute 0.64build1 all
  Utility for creating Java Debian packages

java-policy/resolute 0.57build1 all
  Debian Java Policy

java-propose-classpath/resolute 0.81 all
  Helper script to suggest a classpath for jar files

java-wrappers/resolute 0.5build1 all
  wrappers for java executables

java2html/resolute 0.9.2-7build1 amd64
  Highlight Java and C++ sources for WWW presentation

java3ds-fileloader/resolute 1.2+dfsg-4build1 all
  Java3D 3DS File Loader

javacc/resolute 7.0.13-1 all
  Parser generator for use with Java

javacc-doc/resolute 7.0.13-1 all
  Documentation for the JavaCC Parser Generator

javacc4/resolute 4.0-3build1 all
  Parser generator for use with Java

javacc4-doc/resolute 4.0-3build1 all
  Documentation for the JavaCC Parser Generator

javacc5/resolute 5.0-11build1 all
  Parser generator for use with Java

javacc5-doc/resolute 5.0-11build1 all
  Documentation for the JavaCC Parser Generator

javahelp2/resolute 2.0.05.ds1-10build1 all
  Java based help system

javahelp2-doc/resolute 2.0.05.ds1-10build1 all
  Java based help system - contains Javadoc API documentation

javahelper/resolute 0.81 all
  Helper scripts for packaging Java programs

javamorph/resolute 0.0.20100201-4build1 all
  Java morphing film-make program for pixel picture-input

javascript-common/resolute 12+nmu1build1 all
  Base support for JavaScript library packages

jaxe/resolute 3.5-14build1 all
  JAva Xml Editor

jayatana/resolute 2.7-0ubuntu9 amd64
  Java Native Library for ayatana project

jblas/resolute 1.2.5+dfsg-1build1 amd64
  fast linear algebra library for Java

jbmc/resolute 6.6.0-4ubuntu2 amd64
  bounded model checker for Java programs

jclassinfo/resolute 0.19.1-10build1 amd64
  extracts information from Java class files

jel-java/resolute 2.1.2-2build1 all
  Library for evaluating algebraic expressions in Java

jel-java-doc/resolute 2.1.2-2build1 all
  Java Expressions Library (documentation)

jest/resolute 29.6.2~ds3+~cs73.45.28-3build3 all
  Delightful JavaScript Testing

jetty12/resolute 12.0.32-1 all
  Java servlet engine and webserver

jetty9/resolute 9.4.58-1 all
  Java servlet engine and webserver

jflex/resolute 1.7.0-3build1 all
  lexical analyzer generator for Java

jftp/resolute 1.60+dfsg-4build1 all
  Java GUI client for FTP, SMB, SFTP and NFS

jgit-cli/resolute 6.7.0-2build1 all
  Java implementation of GIT version control (command line interface)

jglobus-doc/resolute 2.1.0-10build1 all
  Javadocs for jglobus

jlex/resolute 1.2.6-13 all
  Lex-style lexical analyser generator for Java

jlha-utils/resolute 0.1.6-6 all
  command-line lzh archiver written in Java

jmacro/resolute 0.6.18-3build1 amd64
  utility for jmacro JavaScript generation library

jmagick7-docs/resolute 6.7.8-6 all
  Java interface to ImageMagick (documentation)

jmapviewer/resolute 2.25+dfsg-1 all
  Java OpenStreetMap Tile Viewer

jmeter-java/resolute 2.13-5build1 all
  Load testing and performance measurement application (java module)

jose/resolute 14-2build1 amd64
  C implementation of Javascript Object Signing and Encryption standards

jruby/resolute 9.4.8.0+ds-3ubuntu1 all
  100% pure-Java implementation of Ruby

js-of-ocaml/resolute 6.2.0-2build6 amd64
  OCaml bytecode to JavaScript compiler (compiler)

jsamp/resolute 1.3.9-1build1 all
  Java Simple Application Messaging Protocol tool for VO

jsbeautifier/resolute 1.15.3-1 all
  JavaScript unobfuscator and beautifier

jsurf-alggeo/resolute 0.4.1+ds-6 all
  Java based visualization library for real algebraic geometry

jsvc/resolute 1.0.15-12build1 amd64
  Wrapper to launch Java applications as daemons

jsxcompressor/resolute 1.12.2+dfsg1-1 all
  Pure Javascript implementation of deflate, unzip, base64_decode

jsxgraph/resolute 1.12.2+dfsg1-1 all
  Interactive Geometry with JavaScript

jtb/resolute 1.4.12-3build1 all
  syntax tree builder and visitors generator for JavaCC

junit/resolute 3.8.2-10build1 all
  Automated testing framework for Java

junit4/resolute 4.13.2-5ubuntu1 all
  JUnit regression test framework for Java

junit4-doc/resolute 4.13.2-5ubuntu1 all
  JUnit regression test framework for Java - documentation

junit5/resolute 5.14.2-0ubuntu2 all
  JUnit regression test framework for Java

jxplorer/resolute 3.3.2+dfsg-7build1 all
  Java LDAP Browser

jython/resolute 2.7.3+repack1-1build1 all
  Python seamlessly integrated with Java

libaccess-modifier-checker-java/resolute 1.35-1 all
  Maven plugin for custom access modifier checking

libaccessodf-java/resolute 0.1.1~b-3build1 all
  library for checking accessibility in ODF/ODT documents using Libreoffice

libactivation-java/resolute 1.2.0-2build1 all
  JavaBeans Activation Framework

libactivemq-activeio-java/resolute 3.1.4-4build1 all
  ActiveMQ ActiveIO protocol implementation framework

libactivemq-java/resolute 5.17.6+dfsg-2 all
  Java message broker core libraries

libactivemq-protobuf-java/resolute 1.1-8build1 all
  ActiveMQ Protocol Buffers Maven plugin

libaeonbits-owner-java/resolute 1.0.12+ds-5 all
  API to handle application configuration through Java properties file

libaether-ant-tasks-java/resolute 1.0.1-6build1 all
  Aether Ant Tasks

libafterburner.fx-java/resolute 1.7.0-3build1 all
  minimalistic JavaFX MVP framework

libafterburner.fx-java-doc/resolute 1.7.0-3build1 all
  Documentation for afterburner.fx

libairline-java/resolute 0.7-3build1 all
  Java annotation-based framework for parsing command line parameters

libajaxtags-java/resolute 1.5.5+dfsg-1 all
  Java based library supporting AJAX in Java Server Pages

libakuma-java/resolute 1.10-3build1 all
  Embeddable daemonization library for Java

libakuma-java-doc/resolute 1.10-3build1 all
  Documentation for Embeddable daemonization library

libandroid-23-java/resolute 6.0.1+r72-6ubuntu2 all
  Android framework for API Level 23 (6.0 Marshmallow)

libandroid-databinding-java/resolute 2.2.2-6build1 all
  Android Data Binding Library

libandroid-ddms-java/resolute 2.2.2-6build1 all
  Communicate with devices through adb - Core library

libandroid-json-java/resolute 10.0.0+r36-1build1 all
  Android rewrite of the evil licensed json.org

libandroid-json-org-java/resolute 20121204-20090211-6 all
  androids rewrite of the evil licensed json.org

libandroid-layoutlib-api-java/resolute 2.2.2-6build1 all
  Library to use the rendering library for Android layouts - API

libandroid-tools-analytics-library-java/resolute 2.2.2-3build1 all
  Libraries for tracking the usage analytics of Android SDK

libandroid-tools-annotations-java/resolute 2.2.2-6build1 all
  annotations used throughout the Android tools libraries

libandroid-tools-common-java/resolute 2.2.2-6build1 all
  common library used by other Android tools libraries

libandroid-tools-dvlib-java/resolute 2.2.2-6build1 all
  Library to manage the Android device database XML files

libandroid-tools-repository-java/resolute 2.2.2-6build1 all
  Library for downloading and managing package repositories

libandroid-tools-sdklib-java/resolute 2.2.2-6build1 all
  Library to parse and download the Android SDK

libandroid-uiautomator-23-java/resolute 6.0.1+r72-6ubuntu2 all
  UI Automator framework for API Level 23 (6.0 Marshmallow)

libandroid-zipflinger-java/resolute 7.2.2-2build1 all
  Library dedicated to ZIP files manipulation

libanimal-sniffer-java/resolute 1.16-2build1 all
  JDK/API verification tools

libannotation-indexer-java/resolute 1.18-1 all
  Indexing and validation of Java annotations

libantelope-java/resolute 3.5.1-5build1 all
  graphical user interface for Ant

libantelope-java-doc/resolute 3.5.1-5build1 all
  graphical user interface for Ant - documentation

libantlr-java/resolute 2.7.7+dfsg-14build2 all
  language tool for constructing recognizers, compilers etc (java library)

libantlr-maven-plugin-java/resolute 2.2-7build1 all
  Maven ANTLR Plugin

libantlr3-gunit-java/resolute 3.5.3-4 all
  Unit Test framework for ANTLR grammars

libantlr3-runtime-java/resolute 3.5.3-4 all
  Runtime library for ANTLR 3

libantlr4-runtime-java/resolute 4.9.2-3build1 all
  Runtime library for ANTLR 4

libaopalliance-java/resolute 20070526-7 all
  library for interoperability for Java AOP implementations

libapache-directory-api-java/resolute 2.1.2-2build1 all
  Apache Directory LDAP API

libapache-directory-jdbm-java/resolute 2.0.0~M2-3build1 all
  ApacheDS JDBM Implementation

libapache-jena-java/resolute 4.9.0-1build1 all
  Java framework for building Semantic Web applications

libapache-mime4j-java/resolute 0.8.13-1 all
  MIME and RFC822 parser for Java

libapache-opennlp-java/resolute 2.5.3-1build1 all
  machine learning based toolkit for the processing of natural language text

libapache-poi-java/resolute 4.0.1-6 all
  Apache POI - Java API for Microsoft Documents

libapache-poi-java-doc/resolute 4.0.1-6 all
  Apache POI - Java API for Microsoft Documents (Documentation)

libapache-pom-java/resolute 33-2build1 all
  Maven metadata for all Apache Software projects

libapache-qpid-proton-j-java/resolute 0.34.1-1 all
  Apache Qpid Proton-J

libapache-qpid-proton-j-java-doc/resolute 0.34.1-1 all
  Apache Qpid Proton-J - documentation

libapache2-mod-jk/resolute 1:1.2.50-1 amd64
  Apache 2 connector for the Tomcat Java servlet engine

libapacheds-i18n-java/resolute 2.0.0~M26-5build1 all
  Apache Directory Server (i18n)

libapacheds-java/resolute 2.0.0~M26-5build1 all
  Apache Directory Server (Libraries)

libapacheds-kerberos-codec-java/resolute 2.0.0~M26-5build1 all
  Apache Directory Server (Kerberos Codec)

libapfloat-java/resolute 1.15.0-1 all
  high performance arbitrary precision arithmetic library for Java

libapiguardian-java/resolute 1.1.2-1build1 all
  Level of stability annotation for frameworks or applications

libapk-parser-java/resolute 2.6.10+ds-4build1 all
  Decode binary XML files and get APK meta info

libapksig-java/resolute 35.0.2-1 all
  library to sign and verify Android APKs

libargparse4j-java/resolute 0.9.0-1build1 all
  command-line argument parser for Java based on Python's argparse module

libargs4j-java/resolute 2.33-2build1 all
  Java command line arguments parser

libasm-java/resolute 9.9.1-1 all
  Java bytecode manipulation framework

libasm-jdk-bridge-java/resolute 0.0.13-1 all
  ASM API adapter for the JDK Class File API

libasmtools-java/resolute 7.0-b09-3build1 all
  OpenJDK AsmTools

libaspectj-java/resolute 1.9.6-1build1 all
  aspect-oriented extension for Java - library

libaspectj-maven-plugin-java/resolute 1.11-3build1 all
  AspectJ compiler Maven Plugin

libassertj-core-java/resolute 3.26.3-2build1 all
  Fluent assertions for Java

libastylej-jni/resolute 3.6.12-1 amd64
  Java JNI library for Artistic Style

libasync-http-client-java/resolute 2.12.3-1ubuntu1 all
  Java Asynchronous HTTP Client

libatinject-jsr330-api-java/resolute 1.0+ds1-6build1 all
  Java API for JSR-330 Dependency Injection

libatinject-jsr330-api-java-doc/resolute 1.0+ds1-6build1 all
  Documentation for libatinject-jsr330-api-java

libatinject-jsr330-tck-java/resolute 1.0+ds1-6build1 all
  Java API for JSR-330 Dependency Injection (TCK)

libatk-wrapper-java/resolute 0.44.0-1 all
  ATK implementation for Java using JNI

libatk-wrapper-java-jni/resolute 0.44.0-1 amd64
  ATK implementation for Java using JNI (JNI bindings)

libauto64fto32f-java/resolute 2.1+ds-1build1 all
  minimalist library for converting double numerical Java code into float

libautocomplete-java/resolute 2.5.3-2build1 all
  Java library for auto-completion in text component

libautolink-java/resolute 0.10.0-1.1build1 all
  Autolink URL extraction library

libautomaton-java/resolute 1.12-4+dfsg-2build1 all
  Finite-State Automaton for Regular Expressions

libavalon-framework-java/resolute 4.2.0+ds-1build1 all
  Common framework for Java server applications

libavalon-framework-java-doc/resolute 4.2.0+ds-1build1 all
  Common framework for Java server applications (API)

libavro-compiler-java/resolute 1.8.2-1build1 all
  Apache Avro compiler for Java

libavro-java/resolute 1.8.2-1build1 all
  Apache Avro data serialization system

libavro-maven-plugin-java/resolute 1.8.2-1build1 all
  Apache Avro Maven plugin

libaxiom-java/resolute 1.2.8-3fakesync1build1 all
  Apache AXIOM - StAX-based XML Infoset compliant object model

libaxis-java/resolute 1.4-29build1 all
  SOAP implementation in Java

libaxis-java-doc/resolute 1.4-29build1 all
  SOAP implementation in Java (documentation)

libaxmlrpc-java/resolute 1.13.0-1build1 all
  XML-RPC Java library

libbackport9-java/resolute 1.10-2build1 all
  Collection of backports and utilities for apps and libraries

libbackport9-java-doc/resolute 1.10-2build1 all
  Documentation for the backport9 Java library

libbarclay-java/resolute 6.0.0+dfsg-1 all
  Java library to parse command line

libbase-java/resolute 1.1.6-4 all
  general purpose base service library (OOo 3.1 branch)

libbasicplayer-java/resolute 3.0-7build1 all
  threaded simple player class based on JavaSound API

libbatik-java/resolute 1.18+dfsg-2build1 all
  xml.apache.org SVG Library

libbcel-java/resolute 6.12.0-0ubuntu1 all
  Analyze, create, and manipulate (binary) Java class files

libbcjmail-java/resolute 1.80-3 all
  Bouncy Castle Jakarta S/MIME API

libbcmail-java/resolute 1.80-3 all
  Bouncy Castle generators/processors for S/MIME and CMS

libbcpg-java/resolute 1.80-3 all
  Bouncy Castle generators/processors for OpenPGP

libbcpkix-java/resolute 1.80-3 all
  Bouncy Castle Java API for PKIX, CMS, EAC, TSP, PKCS, OCSP, CMP, and CRMF

libbcprov-java/resolute 1.80-3 all
  Bouncy Castle Java Cryptographic Service Provider

libbctls-java/resolute 1.80-3 all
  Bouncy Castle JSSE provider and TLS/DTLS API

libbcutil-java/resolute 1.80-3 all
  Bouncy Castle ASN.1 Extension and Utility APIs

libbeam-java/resolute 1.3.9-1 all
  SMILES parsing and generation library for cheminformatics

libbeansbinding-java/resolute 1.2.1-5build1 all
  Beans Binding API (library)

libbeansbinding-java-doc/resolute 1.2.1-5build1 all
  Beans Binding API (documentation)

libbetter-appframework-java/resolute 1.9.2-2build1 all
  Java Better Swing Application Framework (library)

libbetter-appframework-java-doc/resolute 1.9.2-2build1 all
  Java Better Swing Application Framework (documentation)

libbigdoc-java/resolute 0.3.0-2build1 all
  bigdoc - java library for search gigabyte order file

libbindex-java/resolute 2.2+svn101-4build1 all
  OSGi BIndex reader

libbiojava-java/resolute 1:1.9.7+dfsg-2build1 all
  Java API to biological data and applications (default version)

libbiojava1.9-java/resolute 1:1.9.7+dfsg-2build1 all
  Java API to biological data and applications (version 1.9)

libbiojava4-java/resolute 4.2.12+dfsg-8build1 all
  Java API to biological data and applications (default version)

libbiojava4-java-doc/resolute 4.2.12+dfsg-8build1 all
  [Biology] Documentation for BioJava

libbiojava4.0-java/resolute 4.2.12+dfsg-8build1 all
  Java API to biological data and applications (version 4)

libbiojava6-java/resolute 6.1.0+dfsg-6 all
  Java API to biological data and applications (version 6)

libbiojava6-java-doc/resolute 6.1.0+dfsg-6 all
  [Biology] Documentation for BioJava 6

libbluray-bdj/resolute 1:1.4.1-1 all
  Blu-ray Disc Java support library (BD-J library)

libboilerpipe-java/resolute 1.2.0-2build1 all
  Boilerplate removal and fulltext extraction from HTML pages

libbrailleutils-java/resolute 1.2.3-8build1 all
  cross platform library for embossing/converting PEF-files

libbrailleutils-java-doc/resolute 1.2.3-8build1 all
  javadoc for brailleUtils for converting/embossing PEF files

libbrlapi-java/resolute 6.7-1ubuntu6 all
  Java bindings for BrlAPI

libbrlapi-jni/resolute 6.7-1ubuntu6 amd64
  Java bindings for BrlAPI (native library)

libbsf-java/resolute 1:2.4.0-8build1 all
  Bean Scripting Framework to support scripting languages in Java

libbsf-java-doc/resolute 1:2.4.0-8build1 all
  Bean Scripting Framework to support scripting - documentation

libbsh-java/resolute 2.0b4-20build1 all
  Java scripting environment (BeanShell) Version 2 (library)

libbtm-java/resolute 2.1.4-6build1 all
  Bitronix JTA Transaction Manager

libbuild-helper-maven-plugin-java/resolute 3.3.0-1build1 all
  Build Helper Maven Plugin

libbyte-buddy-java/resolute 1.18.4-1fakesync1 all
  Runtime code generation for the Java virtual machine

libbytecode-java/resolute 0.92.svn.20090106-3build1 all
  Java bytecode manipulation library

libbytecode-java-doc/resolute 0.92.svn.20090106-3build1 all
  Documentation for the API of the Java bytecode library

libc3p0-java/resolute 0.9.1.2-11 all
  library for JDBC connection pooling

libc3p0-java-doc/resolute 0.9.1.2-11 all
  library for JDBC connection pooling (documentation)

libcaffeine-java/resolute 2.6.2-1.1build1 all
  High performance caching library

libcallstats-java/resolute 5.2.0-3 all
  library to integrate with callstats.io

libcamljava-ocaml-dev/resolute 0.4-2build9 amd64
  interface between OCaml and Java via Caml/C interface and JNI

libcanl-java/resolute 2.8.3-1build1 all
  EMI Common Authentication library - bindings for Java

libcanl-java-doc/resolute 2.8.3-1build1 all
  Javadoc documentation for canl-java

libcapsule-maven-nextflow-java/resolute 1.0.3.1+dfsg-5build1 all
  packaging tool for Java applications with Maven coordinates

libcarrotsearch-hppc-java/resolute 0.7.2-2build1 all
  High Performance Primitive Collections for Java

libcarrotsearch-procfork-java/resolute 1.0.6~git20211215.86e726d+ds-2build1 all
  process forking/killing utility

libcarrotsearch-randomizedtesting-java/resolute 2.7.9-1build1 all
  Randomized testing infrastructure for JUnit, Ant and Maven

libcastor-anttasks-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - Ant Tasks

libcastor-codegen-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - Codegen

libcastor-core-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - Core

libcastor-ddlgen-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - DDL generator

libcastor-java-doc/resolute 1.3.2-7build1 all
  Documentation for Castor Java databinding framework

libcastor-jdo-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - JDO

libcastor-xml-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - XML module

libcastor-xml-schema-java/resolute 1.3.2-7build1 all
  Data binding framework for Java (XML, Objects, DB) - XML Schema

libcava-java/resolute 0.6.0-2build1 all
  Libraries and tools for blockchain and decentralized software

libcdi-api-java/resolute 1.2-4build1 all
  Contexts and Dependency Injection for Java EE

libcdk-java/resolute 1:2.11-1 all
  Chemistry Development Kit (CDK) Java libraries

libcdkr-java/resolute 3.6.0+dfsg-4build1 all
  chemistry library combining R with CDK

libcds-healpix-java/resolute 0.30.3+ds-1build1 all
  CDS HEALPix library in Java

libcds-healpix-java-doc/resolute 0.30.3+ds-1build1 all
  API documentation for the CDS HEALPix library in Java

libcds-moc-java/resolute 6.31-1 all
  Multi-Order Coverage maps Virtual Observatory library

libcds-moc-java-doc/resolute 6.31-1 all
  Multi-Order Coverage maps Virtual Observatory library documentation

libcds-savot-java/resolute 4.0.0-2build1 all
  Simple Access to VOTable (SAVOT) library for Virtual Observatory

libcds-savot-java-doc/resolute 4.0.0-2build1 all
  Simple Access to VOTable (SAVOT) library for Virtual Observatory documentation

libcephfs-java/resolute 20.2.0-0ubuntu2 all
  Java library for the Ceph File System

libcephfs-jni/resolute 20.2.0-0ubuntu2 amd64
  Java Native Interface library for CephFS Java bindings

libcgi-java/resolute 0.8.1-4build1 amd64
  CGI library for Java

libcglib-java/resolute 3.3.0-1build1 all
  Code generation library for Java

libcglib-nodep-java/resolute 3.3.0-1build1 all
  Code generation library for Java (without dependencies)

libcharts4j-java/resolute 1.3-4build1 all
  free, lightweight charts and graphs Java API

libchecker-framework-java/resolute 3.2.0+ds-4 all
  Framework that makes Java??s type system more powerful and useful

libchemicaltagger-java/resolute 1.6.2-4build1 all
  tool for semantic text-mining in chemistry

libciftools-java/resolute 7.0.2-1 all
  Java library to read and write CIF files

libcifxom-java/resolute 1.5+git20211217.ca2412c-1build1 all
  schema and toolkit for managing CIF files in XML

libcjs-dev/resolute 128.1-2 amd64
  Development files for the javascript bindings for Cinnamon

libcjs0/resolute 128.1-2 amd64
  Library of the javascript bindings for the Cinnamon

libclass-inner-perl/resolute 0.200001-4 all
  module providing Java-like inner classes

libclassmate-java/resolute 1.3.4-3ubuntu2 all
  Library for introspecting generic type information of types, methods and fields

libclassycle-java/resolute 1.4.2-2build1 all
  Analysing tool for Java dependencies

libclassycle-java-doc/resolute 1.4.2-2build1 all
  Analysing tool for Java dependencies - documentation

libclojure-java/resolute 1.12.0-1build2 all
  Lisp dialect for the JVM (library)

libclojure-maven-plugin-java/resolute 1.7.1-2build1 all
  Clojure plugin for Maven

libclosure-compiler-java/resolute 20130227+rhino-3 all
  JavaScript optimizing compiler - library package

libclosure-compiler-java-doc/resolute 20130227+rhino-3 all
  JavaScript optimizing compiler - Javadoc

libcmlxom-java/resolute 4.15-1 all
  Java library for processing CML

libcobertura-java/resolute 2.1.1-2build1 all
  java library that calculates the percentage of code accessed by tests

libcobra-java/resolute 0.98.4-7 all
  Java HTML Renderer & Parser

libcoda-java/resolute 2.25.6-2 all
  Java interface for Common Data Access Framework

libcoda-jni/resolute 2.25.6-2 amd64
  Java Native interface for Common Data Access Framework

libcodemodel-java/resolute 2.6+jaxb2.3.0.1-11build1 all
  Java library for code generators

libcodenarc-groovy-java/resolute 0.23-6build1 all
  Groovy library that provides static analysis features for Groovy code

libcodenarc-groovy-java-doc/resolute 0.23-6build1 all
  Documentation for libcodenarc-groovy-java

libcodesize-java/resolute 1.2-3 all
  calculates the size of code for Robocode

libcofoja-java/resolute 1.3-4.1build1 all
  Java API for annotating code with contracts

libcohttp-lwt-jsoo-ocaml/resolute 5.3.0-2build8 amd64
  CoHTTP implementation for the Js_of_ocaml JavaScript compiler (runtime)

libcohttp-lwt-jsoo-ocaml-dev/resolute 5.3.0-2build8 amd64
  CoHTTP implementation for the Js_of_ocaml JavaScript compiler (dev)

libcolorpicker-java/resolute 1.0.0-4build1 all
  Java control to allow color selection

libcolorpicker-java-doc/resolute 1.0.0-4build1 all
  Java control to allow color selection (documentation)

libcolt-free-java/resolute 1.2.0+dfsg-8 all
  scalable scientific and technical computing in Java

libcolt-free-java-doc/resolute 1.2.0+dfsg-8 all
  scalable scientific and technical computing in Java (doc)

libcomment-preprocessor-java/resolute 6.0.1-2build1 all
  Java Comment Preprocessor

libcommons-beanutils-java/resolute 1.10.1-1.1 all
  Apache Commons BeanUtils - Utility for manipulating Java beans

libcommons-cli-java/resolute 1.6.0-1 all
  Command line arguments and options parsing library

libcommons-codec-java/resolute 1.18.0-1 all
  encoder and decoders such as Base64 and hexadecimal codec

libcommons-collections3-java/resolute 3.2.2-3 all
  Apache Commons Collections - Extended Collections API for Java

libcommons-collections3-java-doc/resolute 3.2.2-3 all
  Documentation for libcommons-collections3-java

libcommons-collections4-java/resolute 4.4-2 all
  Apache Commons Collections - Extended Collections API for Java

libcommons-collections4-java-doc/resolute 4.4-2 all
  Documentation for Commons Collections 4

libcommons-compress-java/resolute 1.27.1-2 all
  Java API for working with compression and archive formats

libcommons-configuration-java/resolute 1.10-7build1 all
  Java based library providing a generic configuration interface

libcommons-configuration2-java/resolute 2.11.0-3 all
  Java based library providing a generic configuration interface

libcommons-csv-java/resolute 1.9.0-1build1 all
  Library for reading and writing CSV files

libcommons-daemon-java/resolute 1.0.15-12build1 all
  Library to launch Java applications as daemons

libcommons-dbcp-java/resolute 1.4-8 all
  Database Connection Pooling Services

libcommons-dbcp2-java/resolute 2.13.0-1build1 all
  Database Connection Pooling Services 2

libcommons-digester-java/resolute 1.8.1-7 all
  Rule based XML Java object mapping tool

libcommons-discovery-java/resolute 0.5-4 all
  Locates classes that implement a given Java interface

libcommons-el-java/resolute 1.0-10 all
  Implementation of the JSP 2.0 Expression Language interpreter

libcommons-email-java/resolute 1.5-3build1 all
  Apache Commons Java API for sending email

libcommons-exec-java/resolute 1.3-3 all
  Java library to reliably execute external processes from within the JVM

libcommons-fileupload-java/resolute 1.5-1.1 all
  File upload capability to your servlets and web applications

libcommons-fileupload-java-doc/resolute 1.5-1.1 all
  Javadoc API documentation for Commons FileUploads

libcommons-httpclient-java/resolute 3.1-16build1 all
  Commons HTTPClient - Java library for creating HTTP clients

libcommons-httpclient-java-doc/resolute 3.1-16build1 all
  Documentation for libcommons-httpclient-java

libcommons-io-java/resolute 2.19.0-1 all
  Common useful IO related classes

libcommons-jci-eclipse-java/resolute 1.1-9build1 all
  common Java interface for various compilers - Eclipse JDT

libcommons-jci-groovy-java/resolute 1.1-9build1 all
  common Java interface for various compilers - Groovy

libcommons-jci-janino-java/resolute 1.1-9build1 all
  common Java interface for various compilers - Janino

libcommons-jci-java/resolute 1.1-9build1 all
  common Java interface for various compilers - Core and FAM

libcommons-jci-rhino-java/resolute 1.1-9build1 all
  common Java interface for various compilers - Javascript

libcommons-jexl-java/resolute 1.1-6 all
  expression language engine

libcommons-jexl2-java/resolute 2.1.1-6 all
  Apache Commons JEXL - Java Expression Language

libcommons-jexl3-java/resolute 3.1-3 all
  Apache Commons JEXL - Java Expression Language

libcommons-jxpath-java/resolute 1.3-11 all
  Apache Commons JXPath - XPath expressions applied to Java objects

libcommons-lang-java/resolute 2.6-12 all
  Commons Lang - an extension of the java.lang package

libcommons-lang-java-doc/resolute 2.6-12 all
  Documentation for Commons Lang - an extension of the java.lang package

libcommons-lang3-java/resolute 3.17.0-2 all
  Apache Commons Lang utility classes

libcommons-logging-java/resolute 1.3.0-1ubuntu1 all
  common wrapper interface for several logging APIs

libcommons-math-java/resolute 2.2-9build1 all
  Java lightweight mathematics and statistics components

libcommons-math3-java/resolute 3.6.1-4build1 all
  Java lightweight mathematics and statistics components

libcommons-math3-java-doc/resolute 3.6.1-4build1 all
  Java lightweight mathematics and statistics components - documentation

libcommons-net-java/resolute 3.9.0-1 all
  Apache Commons Net - Java client API for basic Internet protocols

libcommons-parent-java/resolute 56-1build1 all
  Maven metadata for Apache Commons project

libcommons-pool-java/resolute 1.6-5build1 all
  pooling implementation for Java objects

libcommons-pool-java-doc/resolute 1.6-5build1 all
  pooling implementation for Java objects - documentation

libcommons-pool2-java/resolute 2.12.0-1build1 all
  Apache Commons Pool 2 - Pooling implementation for Java objects

libcommons-rdf-java/resolute 0.5.0-2build1 all
  type-safe, non-general API that covers RDF 1.1

libcommons-text-java/resolute 1.13.1-2 all
  Apache Commons Text

libcommons-validator-java/resolute 1:1.9.0-1ubuntu1 all
  ease and speed development and maintenance of validation rules

libcommons-vfs-java/resolute 2.1-5 all
  Java API for accessing various filesystems

libcompile-command-annotations-java/resolute 1.2.3-1build1 all
  annotation based configuration file generator for the Hotspot JVM JIT compiler

libcompress-lzf-java/resolute 1.0.4-1build1 all
  Java library for encoding and decoding data in LZF format

libconcurrentunit-java/resolute 0.4.6-4 all
  simple toolkit for testing multi-threaded Java code

libconfig-properties-perl/resolute 1.80-3 all
  Perl module to read and write Java-style property files

libcontrolsfx-java/resolute 11.0.0-1build1 all
  high quality UI controls and other tools to complement JavaFX

libconversant-disruptor-java/resolute 1.2.15-1build1 all
  Very low latency Java BlockingQueue

libcopy-rename-maven-plugin-java/resolute 2.0.0-2build1 all
  m2e compatible maven plugin for renaming/copying

libcortado-java/resolute 0.6.0-5build1 all
  streaming applet for Ogg formats -- shared components

libcryptacular-java/resolute 1.2.7-1.1 all
  high level, general purpose Java cryptographic library

libcryptacular-java-doc/resolute 1.2.7-1.1 all
  high level, general purpose Java cryptographic library - documentation

libcsnd6-java/resolute 1:6.18.1+dfsg-6build2 amd64
  Java bindings for the Csound API

libcss-validator-java/resolute 0~20250226+dfsg-1 all
  W3C CSS Validator - jar file

libcssparser-java/resolute 0.9.29-1build1 all
  Java CSS2 Parser

libcsv-java/resolute 2.1-2 all
  CSV IO library for Java

libcsv-java-doc/resolute 2.1-2 all
  CSV IO library for Java (documentation)

libcsvjdbc-java/resolute 1.0.37-1build1 all
  read-only JDBC driver that uses CSV or DBF files as database tables

libcurator-client-java/resolute 5.7.1+ds-1build1 all
  Apache Curator Client

libcurator-discovery-java/resolute 5.7.1+ds-1build1 all
  Apache Curator Service Discovery

libcurator-framework-java/resolute 5.7.1+ds-1build1 all
  Apache Curator Framework

libcurator-parent-java/resolute 5.7.1+ds-1build1 all
  Apache Curator Parent

libcurator-recipes-java/resolute 5.7.1+ds-1build1 all
  Apache Curator Recipes

libcurator-test-java/resolute 5.7.1+ds-1build1 all
  Apache Curator Testing Utilities

libcurvesapi-java/resolute 1.06-1build1 all
  Java implementation of mathematical curves defined over a set of control points

libdarnwdl-jni/resolute 0.8-1build2 amd64
  Java JNI for WDL document format viewer

libdata-javascript-anon-perl/resolute 1.03-3 all
  Dump big dumb Perl structs to anonymous JavaScript structs

libdata-javascript-perl/resolute 1.16-1 all
  module to dump perl data structures into JavaScript code

libdata-url-java/resolute 1.0.1-2build1 all
  Support for data URLs according to RFC 2397

libdb-je-java/resolute 3.3.98-3 all
  Oracle Berkeley Database Java Edition

libdbus-java/resolute 2.8-11build1 all
  simple interprocess messaging system (Java implementation)

libdd-plist-java/resolute 1.20-1.1build1 all
  Java library for working with property lists

libddogleg-java/resolute 0.22+ds-2 all
  library for non-linear optimization, clustering, robust model fitting and more

libdecentxml-java/resolute 1.4+git20210318.841f464-1 all
  XML parser optimized for round-tripping and code reuse

libdecentxml-java-doc/resolute 1.4+git20210318.841f464-1 all
  API documentation for libdecentxml-java

libdeepboof-java/resolute 0.5.1+ds-2build1 all
  Java library for running deep neural networks

libderby-java/resolute 10.14.2.0-3build1 all
  Apache Derby Database Engine and Embedded JDBC Driver

libderbyclient-java/resolute 10.14.2.0-3build1 all
  Apache Derby Client JDBC Driver

libdexx-java/resolute 0.7-2 all
  immutable, persistent collection classes for Java

libdictzip-java/resolute 0.8.2-4build2 all
  DictZip library for Java

libdiffutils-java/resolute 4.9-1build1 all
  compute diffs and apply patches in Java

libdirgra-java/resolute 0.4-2build1 all
  Java library providing a simple directed graph implementation

libdirgra-java-doc/resolute 0.4-2build1 all
  Documentation for dirgra

libdisruptor-java/resolute 3.4.4-1build1 all
  Disruptor - High Performance Inter-Thread Messaging Library for Java

libdistlib-java/resolute 1.0-6 all
  Java library of statistical distribution functions

libdistlib-java-doc/resolute 1.0-6 all
  Java library of statistical distribution functions (documentation)

libdnsjava-java/resolute 3.6.3-1 all
  Implementation of DNS in Java

libdokujclient-java/resolute 3.9.1-1build1 all
  Client library for Dokuwiki's xmlrpc interface

libdom4j-java/resolute 2.1.4-1build1 all
  Flexible XML framework for Java

libdoxia-core-java/resolute 2.0.0-1build1 all
  Doxia content generation framework (core)

libdoxia-java/resolute 2.0.0-1build1 all
  Doxia content generation framework (modules)

libdoxia-sitetools-java/resolute 2.0.0-1build1 all
  Extension package of the content generation framework Doxia

libdrmaa1.0-java/resolute 8.1.9+dfsg-13.2 all
  Distributed resource management Application API library - Java bindings

libdrmaa1.0-java-doc/resolute 8.1.9+dfsg-13.2 all
  Distributed resource management Application API library - Java bindings docs

libdropwizard-metrics-java/resolute 3.2.6-1build1 all
  capture JVM- and application-level metrics for Java applications

libdsiutils-java/resolute 2.7.4+dfsg-1 all
  Java library of statistical and text data handling tools

libdtd-parser-java/resolute 1.2-1build1 all
  Java library for parsing XML DTDs

libdtdinst-java/resolute 20241231+repack-1 all
  XML DTD to XML instance format converter - Java library

libduktape207/resolute 2.7.0+tests-0ubuntu4 amd64
  embeddable Javascript engine, library

libdumbster-java/resolute 1.6+debian-5build1 all
  very simple fake SMTP Server for testing purposes

libdynalang-java/resolute 0.4-5build1 all
  JVM Dynamic Languages Metaobject Protocol

libeasybind-java/resolute 1.0.3-2build1 all
  helper library for custom JavaFX bindings using lamdas

libeasyconf-java/resolute 0.9.5-7build1 all
  library to access configuration of software components

libeasyconf-java-doc/resolute 0.9.5-7build1 all
  library to access configuration of software components - Javadoc

libeasymock-java/resolute 5.5.0-1build1 all
  Java library to generate Mock Objects for given interfaces

libecj-java/resolute 3.16.0-3build1 all
  Eclipse Java compiler (library)

libeclipse-collections-java/resolute 11.1.0-1build1 all
  Eclipse Collections - comprehensive collections library for Java

libeclipse-compare-core-java/resolute 3.8.100+eclipse4.29-4build1 all
  Eclipse Core Compare Support

libeclipse-compare-java/resolute 3.9.200+eclipse4.29-4build1 all
  Eclipse Compare Support

libeclipse-core-commands-java/resolute 3.11.100+eclipse4.29-1build1 all
  Eclipse Commands

libeclipse-core-contenttype-java/resolute 3.9.100+eclipse4.29-4build1 all
  Eclipse Content Mechanism

libeclipse-core-databinding-beans-java/resolute 1.10.100+eclipse4.29-1build1 all
  Eclipse JFace Data Binding for JavaBeans

libeclipse-core-databinding-java/resolute 1.13.100+eclipse4.29-1build1 all
  Eclipse JFace Data Binding

libeclipse-core-databinding-observable-java/resolute 1.13.100+eclipse4.29-1build1 all
  Eclipse JFace Data Binding Observables

libeclipse-core-databinding-property-java/resolute 1.10.100+eclipse4.29-1build1 all
  Eclipse JFace Data Binding Properties

libeclipse-core-expressions-java/resolute 3.9.100+eclipse4.29-4build1 all
  Eclipse Expression Language

libeclipse-core-externaltools-java/resolute 1.3.100+eclipse4.29-4build1 all
  Eclipse External Tools Headless Support

libeclipse-core-filebuffers-java/resolute 3.8.100+eclipse4.29-1build1 all
  Eclipse File Buffers

libeclipse-core-filesystem-java/resolute 1.10.100+eclipse4.29-4build1 all
  Eclipse Core File Systems

libeclipse-core-jobs-java/resolute 3.15.0+eclipse4.29-4build1 all
  Eclipse Core Jobs

libeclipse-core-net-java/resolute 1.5.100+eclipse4.29-4build1 all
  Eclipse Internet Connection Management

libeclipse-core-resources-java/resolute 3.19.100+eclipse4.29-4build1 all
  Eclipse Core Resource Management

libeclipse-core-runtime-java/resolute 3.29.0+eclipse4.29-4build1 all
  Eclipse Core Runtime

libeclipse-core-variables-java/resolute 3.6.100+eclipse4.29-4build1 all
  Eclipse Core Variables

libeclipse-debug-core-java/resolute 3.21.100+eclipse4.29-4build1 all
  Eclipse Debug Core

libeclipse-debug-ui-java/resolute 3.18.100+eclipse4.29-4build1 all
  Eclipse Debug UI

libeclipse-e4-core-commands-java/resolute 1.1.100+eclipse4.29-1build1 all
  Eclipse e4 core commands

libeclipse-e4-core-contexts-java/resolute 1.12.100+eclipse4.29-4build1 all
  Eclipse Contexts

libeclipse-e4-core-di-annotations-java/resolute 1.8.100+eclipse4.29-4build1 all
  Eclipse Dependency Injection Annotations

libeclipse-e4-core-di-extensions-java/resolute 0.18.0+eclipse4.29-4build1 all
  Eclipse Dependency Injection Extensions

libeclipse-e4-core-di-extensions-supplier-java/resolute 0.17.100+eclipse4.29-4build1 all
  Eclipse Dependency Injection Extensions Supplier

libeclipse-e4-core-di-java/resolute 1.9.100+eclipse4.29-4build1 all
  Eclipse Dependency Injection

libeclipse-e4-core-services-java/resolute 2.4.100+eclipse4.29-4build1 all
  Eclipse Application Services

libeclipse-e4-emf-xpath-java/resolute 0.4.100+eclipse4.29-1build1 all
  Eclipse EMF XPath

libeclipse-e4-ui-bindings-java/resolute 0.14.100+eclipse4.29-1build1 all
  Eclipse Bindings Support

libeclipse-e4-ui-css-core-java/resolute 0.14.100+eclipse4.29-1build1 all
  Eclipse CSS Core Support

libeclipse-e4-ui-css-swt-java/resolute 0.15.100+eclipse4.29-1build1 all
  Eclipse CSS SWT Support

libeclipse-e4-ui-css-swt-theme-java/resolute 0.14.100+eclipse4.29-1build1 all
  Eclipse CSS SWT Theme Support

libeclipse-e4-ui-di-java/resolute 1.5.100+eclipse4.29-1build1 all
  Eclipse UI Dependency Injection

libeclipse-e4-ui-dialogs-java/resolute 1.4.100+eclipse4.29-1build1 all
  Eclipse e4 dialogs

libeclipse-e4-ui-ide-java/resolute 3.17.100+eclipse4.29-1build1 all
  Eclipse e4 IDE UI

libeclipse-e4-ui-model-workbench-java/resolute 2.4.100+eclipse4.29-1build1 all
  Eclipse Workbench Model

libeclipse-e4-ui-progress-java/resolute 0.4.100+eclipse4.29-1build1 all
  Eclipse e4 Progress View

libeclipse-e4-ui-services-java/resolute 1.6.100+eclipse4.29-1build1 all
  Eclipse UI Application Services

libeclipse-e4-ui-swt-gtk-java/resolute 1.2.0+eclipse4.29-1build1 all
  Eclipse UI GTK Enhancements

libeclipse-e4-ui-widgets-java/resolute 1.4.0+eclipse4.29-1build1 all
  Eclipse UI Custom widgets

libeclipse-e4-ui-workbench-addons-swt-java/resolute 1.5.100+eclipse4.29-1build1 all
  Eclipse e4 Workbench Add-ons

libeclipse-e4-ui-workbench-java/resolute 1.15.100+eclipse4.29-1build1 all
  Eclipse e4 Workbench

libeclipse-e4-ui-workbench-renderers-swt-java/resolute 0.16.100+eclipse4.29-1build1 all
  Eclipse e4 Workbench SWT Renderer

libeclipse-e4-ui-workbench-swt-java/resolute 0.17.100+eclipse4.29-1build1 all
  Eclipse e4 Workbench SWT

libeclipse-e4-ui-workbench3-java/resolute 0.17.100+eclipse4.29-1build1 all
  Bundle for Workbench APIs available in e4

libeclipse-emf-common-java/resolute 2.42.0+eclipse2.42.0+dfsg-1 all
  Eclipse Modeling Framework (EMF) Common

libeclipse-emf-ecore-change-java/resolute 2.17.0+eclipse2.42.0+dfsg-1 all
  Eclipse Modeling Framework (EMF) Change Model

libeclipse-emf-ecore-java/resolute 2.39.0+eclipse2.42.0+dfsg-1 all
  Eclipse Modeling Framework (EMF) Ecore

libeclipse-emf-ecore-xmi-java/resolute 2.39.0+eclipse2.42.0+dfsg-1 all
  Eclipse Modeling Framework (EMF) XML/XMI Persistence

libeclipse-emf-edit-java/resolute 2.23.0+eclipse2.42.0+dfsg-1 all
  Eclipse Modeling Framework (EMF) Edit

libeclipse-help-java/resolute 3.10.100+eclipse4.29-4build1 all
  Eclipse Help System Core

libeclipse-jdt-annotation-java/resolute 2.2.700+eclipse4.29-2build1 all
  Eclipse JDT Annotations for Enhanced Null Analysis

libeclipse-jdt-apt-core-java/resolute 3.8.100+eclipse4.29-2build1 all
  Eclipse Java Annotation Processing Core

libeclipse-jdt-apt-pluggable-core-java/resolute 1.4.100+eclipse4.29-2build1 all
  Eclipse Java Compiler Apt IDE

libeclipse-jdt-astview-java/resolute 1.6.0+eclipse4.29-1build1 all
  Eclipse AST View Plug-in

libeclipse-jdt-core-compiler-batch-java/resolute 3.35.0+eclipse4.29-2build1 all
  Eclipse Java Compiler Batch

libeclipse-jdt-core-java/resolute 3.35.0+eclipse4.29-2build1 all
  Eclipse Java Development Tools Core

libeclipse-jdt-core-manipulation-java/resolute 1.19.100+eclipse4.29-1build1 all
  Eclipse Java Code Manipulation Functionality

libeclipse-jdt-debug-java/resolute 3.21.100+eclipse4.29-1build1 all
  Eclipse JDI Debug Model

libeclipse-jdt-debug-ui-java/resolute 3.13.100+eclipse4.29-1build1 all
  Eclipse JDI Debug UI

libeclipse-jdt-junit-core-java/resolute 3.12.100+eclipse4.29-1build1 all
  Eclipse Java Development Tools JUnit core support

libeclipse-jdt-junit-runtime-java/resolute 3.7.200+eclipse4.29-1build1 all
  Eclipse Java Development Tools JUnit Runtime Support

libeclipse-jdt-junit4-runtime-java/resolute 1.3.0+eclipse4.29-1build1 all
  Eclipse Java Development Tools JUnit4 Runtime Support

libeclipse-jdt-launching-java/resolute 3.20.100+eclipse4.29-1build1 all
  Eclipse Java Development Tools Launching Support

libeclipse-jdt-ui-java/resolute 3.30.0+eclipse4.29-1build1 all
  Eclipse Java Development Tools UI

libeclipse-jem-util-java/resolute 2.2.100+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Java EMF Model Utilities

libeclipse-jface-databinding-java/resolute 1.15.100+eclipse4.29-1build1 all
  Eclipse JFace Data Binding for SWT and JFace

libeclipse-jface-java/resolute 3.31.0+eclipse4.29-1build1 all
  Eclipse JFace

libeclipse-jface-notifications-java/resolute 0.6.100+eclipse4.29-1build1 all
  Eclipse JFace Notification API

libeclipse-jface-text-java/resolute 3.24.100+eclipse4.29-1build1 all
  Eclipse JFace Text

libeclipse-jsch-core-java/resolute 1.5.100+eclipse4.29-4build1 all
  Eclipse JSch Core

libeclipse-jsch-ui-java/resolute 1.5.100+eclipse4.29-4build1 all
  Eclipse JSch UI

libeclipse-linuxtools-java/resolute 8.1.0+dfsg.1-1build1 all
  framework for Eclipse CDT profiling tools (Java libraries)

libeclipse-ltk-core-refactoring-java/resolute 3.14.100+eclipse4.29-1build1 all
  Eclipse Refactoring Core

libeclipse-ltk-ui-refactoring-java/resolute 3.13.100+eclipse4.29-1build1 all
  Eclipse Refactoring UI

libeclipse-nebula-widgets-nattable-core-java/resolute 2.0.0+dfsg-1build1 all
  Nebula NatTable - high performance SWT data grid

libeclipse-osgi-compatibility-state-java/resolute 1.2.800+eclipse4.29-2build1 all
  Equinox State and Resolver Compatibility Fragment

libeclipse-osgi-java/resolute 3.18.500+eclipse4.29-2build1 all
  Eclipse OSGi System Bundle

libeclipse-osgi-services-java/resolute 3.11.100+eclipse4.29-2build1 all
  Eclipse OSGi Service Interfaces and Classes

libeclipse-search-java/resolute 3.15.200+eclipse4.29-1build1 all
  Eclipse Search Support

libeclipse-sisu-maven-plugin-java/resolute 0.3.5-1build1 all
  Manage Sisu components and applications

libeclipse-swtchart-java/resolute 0.14.0-1build1 all
  Eclipse SWTChart creates different types of charts

libeclipse-team-core-java/resolute 3.10.100+eclipse4.29-4build1 all
  Eclipse Team Support Core

libeclipse-team-genericeditor-diff-extension-java/resolute 1.2.100+eclipse4.29-4build1 all
  Eclipse Diff Extension for Generic Editor

libeclipse-team-ui-java/resolute 3.10.100+eclipse4.29-4build1 all
  Eclipse Team Support UI

libeclipse-text-java/resolute 3.13.100+eclipse4.29-1build1 all
  Eclipse Text

libeclipse-ui-browser-java/resolute 3.8.100+eclipse4.29-1build1 all
  Eclipse Browser Support

libeclipse-ui-console-java/resolute 3.13.0+eclipse4.29-4build1 all
  Eclipse Console

libeclipse-ui-editors-java/resolute 3.17.0+eclipse4.29-1build1 all
  Eclipse Default Text Editor

libeclipse-ui-externaltools-java/resolute 3.6.100+eclipse4.29-4build1 all
  Eclipse External Tools

libeclipse-ui-forms-java/resolute 3.13.0+eclipse4.29-1build1 all
  Eclipse UI forms

libeclipse-ui-genericeditor-java/resolute 1.3.100+eclipse4.29-1build1 all
  EEclipse Generic and Extensible Text Editor

libeclipse-ui-ide-application-java/resolute 1.5.100+eclipse4.29-1build1 all
  Eclipse IDE UI Application

libeclipse-ui-ide-java/resolute 3.21.100+eclipse4.29-1build1 all
  Eclipse IDE UI

libeclipse-ui-java/resolute 3.204.0+eclipse4.29-1build1 all
  Eclipse UI

libeclipse-ui-monitoring-java/resolute 1.3.100+eclipse4.29-1build1 all
  Eclipse UI Responsiveness Monitoring

libeclipse-ui-navigator-java/resolute 3.12.100+eclipse4.29-1build1 all
  Eclipse Common Navigator View

libeclipse-ui-navigator-resources-java/resolute 3.9.100+eclipse4.29-1build1 all
  Eclipse Navigator Workbench Components

libeclipse-ui-themes-java/resolute 1.2.2300+eclipse4.29-1build1 all
  Eclipse SDK Themes

libeclipse-ui-views-java/resolute 3.12.100+eclipse4.29-1build1 all
  Eclipse Views

libeclipse-ui-views-properties-tabbed-java/resolute 3.10.100+eclipse4.29-1build1 all
  Eclipse Tabbed Properties View

libeclipse-ui-workbench-java/resolute 3.130.0+eclipse4.29-1build1 all
  Eclipse Workbench

libeclipse-ui-workbench-texteditor-java/resolute 3.17.100+eclipse4.29-1build1 all
  Eclipse Text Editor Framework

libeclipse-urischeme-java/resolute 1.3.100+eclipse4.29-1build1 all
  Eclipse URI Scheme Handling

libeclipse-wst-common-core-java/resolute 1.4.100+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - WST Common Core Plug-in

libeclipse-wst-common-emf-java/resolute 1.2.700+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - EMF Utilities

libeclipse-wst-common-emfworkbench-integration-java/resolute 1.3.0+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - EMF Workbench Edit Plug-in

libeclipse-wst-common-environment-java/resolute 1.1.0+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Environment Plug-in

libeclipse-wst-common-frameworks-java/resolute 1.3.0+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Common Frameworks

libeclipse-wst-common-frameworks-ui-java/resolute 1.3.0+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - WTP UI Plug-in

libeclipse-wst-common-project-facet-core-java/resolute 1.5.0+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Eclipse Faceted Project Framework

libeclipse-wst-common-ui-java/resolute 1.2.401+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Eclipse Base UI extensions

libeclipse-wst-common-uriresolver-java/resolute 1.4.0+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Common URI Resolver Framework

libeclipse-wst-sse-core-java/resolute 1.2.1400+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Structured Source Model

libeclipse-wst-sse-ui-java/resolute 1.7.1000+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Structured Source Editor

libeclipse-wst-validation-java/resolute 1.3.100+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Validation Framework

libeclipse-wst-validation-ui-java/resolute 1.3.100+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Validation Framework UI

libeclipse-wst-xml-core-java/resolute 1.2.900+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Structured Source XML Model

libeclipse-wst-xml-ui-java/resolute 1.2.701+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - Eclipse XML Editors and Tools

libeclipse-wst-xsd-core-java/resolute 1.2.101+eclipse3.35-1build1 all
  Eclipse Web Tools Platform - XSD Core Plugin

libeclipse-xsd-java/resolute 2.17.0+eclipse2.22.0-2build1 all
  XML Schema Definition (XSD) for Eclipse

libeclipselink-java/resolute 2.7.15-1build1 all
  Eclipse Persistence Services Project

libeddsa-java/resolute 0.3.0-3 all
  implementation of EdDSA in Java

libehcache-java/resolute 2.6.11-5build1 all
  distributed cache library

libeigenbase-farrago-java/resolute 0.9.0+dfsg-1 all
  Java framework for constructing RDBMS services

libeigenbase-resgen-java/resolute 1.3.0.13768-6build1 all
  Java i18n code generator from XML files

libeigenbase-resgen-java-doc/resolute 1.3.0.13768-6build1 all
  Java i18n code generator from XML files - documentation

libejml-java/resolute 0.41+ds-3 all
  Efficient Java Matrix Library

libel-api-java/resolute 3.0.0-3build1 all
  Expression Language API

libeprosima-idl-parser-java/resolute 4.2.0+dfsg-1 all
  IDL parser library for eProsima FastDDS

libequinox-app-java/resolute 1.6.300+eclipse4.29-2build1 all
  Eclipse Equinox Application Container

libequinox-bidi-java/resolute 1.4.300+eclipse4.29-2build1 all
  Eclipse Equinox Bidirectional Text Support

libequinox-cm-java/resolute 1.5.200+eclipse4.29-2build1 all
  Eclipse Equinox Configuration Admin

libequinox-common-java/resolute 3.18.100+eclipse4.29-2build1 all
  Eclipse Equinox Common Utility Bundle

libequinox-concurrent-java/resolute 1.2.100+eclipse4.29-2build1 all
  Eclipse Equinox Concurrent API

libequinox-console-java/resolute 1.4.500+eclipse4.29-2build1 all
  Eclipse Equinox Console plug-in

libequinox-coordinator-java/resolute 1.5.200+eclipse4.29-2build1 all
  Eclipse Equinox Coordinator

libequinox-device-java/resolute 1.1.400+eclipse4.29-2build1 all
  Eclipse Equinox Device Access Service

libequinox-event-java/resolute 1.6.200+eclipse4.29-2build1 all
  Eclipse Equinox Event Admin

libequinox-frameworkadmin-equinox-java/resolute 1.2.400+eclipse4.29-1build1 all
  Equinox Framework Admin for Equinox

libequinox-frameworkadmin-java/resolute 2.2.200+eclipse4.29-1build1 all
  Equinox Framework Admin

libequinox-http-jetty-java/resolute 3.8.300+eclipse4.29-2build1 all
  Eclipse Equinox Jetty HTTP Service

libequinox-http-registry-java/resolute 1.3.300+eclipse4.29-2build1 all
  Eclipse Equinox HTTP Registry

libequinox-http-servlet-java/resolute 1.7.400+eclipse4.29-2build1 all
  Eclipse Equinox HTTP Services Servlet

libequinox-http-servletbridge-java/resolute 1.2.200+eclipse4.29-2build1 all
  Eclipse Equinox Servletbridge HTTP Service

libequinox-jsp-jasper-java/resolute 1.1.700+eclipse4.29-2build1 all
  Eclipse Equinox Jasper Jsp Support Bundle

libequinox-jsp-jasper-registry-java/resolute 1.2.100+eclipse4.29-2build1 all
  Eclipse Equinox Jasper Jsp Registry Support Plug-in

libequinox-launcher-java/resolute 1.6.500+eclipse4.29-2build1 all
  Eclipse Equinox Launcher

libequinox-metatype-java/resolute 1.6.300+eclipse4.29-2build1 all
  Eclipse Equinox Meta Type

libequinox-osgi-java/resolute 3.9.1-6 all
  Equinox OSGi framework (Transitional)

libequinox-p2-artifact-repository-java/resolute 1.5.100+eclipse4.29-1build1 all
  Equinox Provisioning Artifact Repository Support

libequinox-p2-console-java/resolute 1.3.100+eclipse4.29-1build1 all
  Equinox Provisioning Console

libequinox-p2-core-java/resolute 2.10.100+eclipse4.29-1build1 all
  Equinox p2 Core

libequinox-p2-director-app-java/resolute 1.3.100+eclipse4.29-1build1 all
  Equinox Provisioning Director Application

libequinox-p2-director-java/resolute 2.6.100+eclipse4.29-1build1 all
  Equinox Provisioning Director

libequinox-p2-directorywatcher-java/resolute 1.4.100+eclipse4.29-1build1 all
  Equinox Provisioning Directory Watcher

libequinox-p2-discovery-java/resolute 1.3.100+eclipse4.29-1build1 all
  Equinox Provisioning Discovery

libequinox-p2-engine-java/resolute 2.8.100+eclipse4.29-1build1 all
  Equinox Provisioning Engine

libequinox-p2-extensionlocation-java/resolute 1.5.100+eclipse4.29-1build1 all
  Equinox Provisioning Extension Location Repository Support

libequinox-p2-garbagecollector-java/resolute 1.3.100+eclipse4.29-1build1 all
  Equinox Provisioning Garbage Collector

libequinox-p2-jarprocessor-java/resolute 1.3.200+eclipse4.29-1build1 all
  Equinox Provisioning JAR Processor

libequinox-p2-metadata-java/resolute 2.7.100+eclipse4.29-1build1 all
  Equinox Provisioning Metadata

libequinox-p2-metadata-repository-java/resolute 1.5.100+eclipse4.29-1build1 all
  Equinox Provisioning Metadata Repository

libequinox-p2-operations-java/resolute 2.7.100+eclipse4.29-1build1 all
  Equinox Provisioning Operations API

libequinox-p2-publisher-eclipse-java/resolute 1.5.100+eclipse4.29-1build1 all
  Equinox Provisioning Publisher for Eclipse

libequinox-p2-publisher-java/resolute 1.8.100+eclipse4.29-1build1 all
  Equinox Provisioning Publisher Infrastructure

libequinox-p2-reconciler-dropins-java/resolute 1.5.100+eclipse4.29-1build1 all
  Equinox Provisioning Drop-in

libequinox-p2-repository-java/resolute 2.7.100+eclipse4.29-1build1 all
  Equinox Provisioning Repository

libequinox-p2-repository-tools-java/resolute 2.4.100+eclipse4.29-1build1 all
  Equinox Provisioning Repository Tools

libequinox-p2-touchpoint-eclipse-java/resolute 2.4.100+eclipse4.29-1build1 all
  Equinox Provisioning Eclipse Touchpoint

libequinox-p2-touchpoint-natives-java/resolute 1.5.100+eclipse4.29-1build1 all
  Equinox Provisioning Native Touchpoint

libequinox-p2-ui-java/resolute 2.8.100+eclipse4.29-1build1 all
  Equinox Provisioning UI Support

libequinox-p2-updatechecker-java/resolute 1.4.100+eclipse4.29-1build1 all
  Equinox Provisioning Update Checker

libequinox-p2-updatesite-java/resolute 1.3.100+eclipse4.29-1build1 all
  Equinox Provisioning Legacy Update Site Support

libequinox-preferences-java/resolute 3.10.300+eclipse4.29-2build1 all
  Eclipse Preferences Mechanism

libequinox-region-java/resolute 1.5.300+eclipse4.29-2build1 all
  Eclipse Equinox Region

libequinox-registry-java/resolute 3.11.300+eclipse4.29-2build1 all
  Eclipse Extension Registry Support

libequinox-security-java/resolute 1.4.0+eclipse4.29-2build1 all
  Eclipse Equinox Java Authentication and Authorization Service (JAAS)

libequinox-security-ui-java/resolute 1.4.0+eclipse4.29-2build1 all
  Equinox Security Default UI

libequinox-servletbridge-java/resolute 1.6.300+eclipse4.29-2build1 all
  Eclipse Equinox Servletbridge

libequinox-simpleconfigurator-java/resolute 1.4.300+eclipse4.29-1build1 all
  Equinox Simple Configurator

libequinox-simpleconfigurator-manipulator-java/resolute 2.2.200+eclipse4.29-1build1 all
  Equinox Simple Configurator Manipulator

libequinox-transforms-hook-java/resolute 1.3.300+eclipse4.29-2build1 all
  Eclipse Equinox Transformer Hook Framework Extension

libequinox-transforms-xslt-java/resolute 1.2.300+eclipse4.29-2build1 all
  Eclipse Equinox Transforms XSLT

libequinox-useradmin-java/resolute 1.2.400+eclipse4.29-2build1 all
  Eclipse Equinox User Admin Service

libequinox-weaving-caching-java/resolute 1.2.300+eclipse4.29-2build1 all
  Eclipse Equinox Weaving Caching

libequinox-weaving-hook-java/resolute 1.3.200+eclipse4.29-2build1 all
  Eclipse Equinox Weaving Hook

liberror-prone-java/resolute 2.18.0-1build1 all
  Catch common Java mistakes as compile-time errors

libescapevelocity-java/resolute 0.9.1-2build1 all
  Subset reimplementation of Apache Velocity with a much simpler API

libesd-java/resolute 0.0.7-5build1 all
  Implementation of EsounD in pure Java

libeuclid-java/resolute 2.14-1 all
  Java library for 2D and 3D geometric calculations

libexcalibur-logger-java/resolute 2.1-8build1 all
  Excalibur project's log management system

libexcalibur-logkit-java/resolute 2.0-13build1 all
  Lightweight and fast designed logging toolkit for Java

libexec-maven-plugin-java/resolute 3.1.0-2build1 all
  Exec Maven Plugin

libexternalsortinginjava-java/resolute 0.6.1-2 all
  External-Memory Sorting in Java

libextractor-java-dev/resolute 1.0.0-8build1 amd64
  Java bindings for GNU libextractor (development)

libextractor-java0/resolute 1.0.0-8build1 amd64
  Java bindings for GNU libextractor

libez-vcard-java/resolute 0.12.1+dfsg-1 all
  vCard library

libezmorph-java/resolute 1.0.6-4 all
  Java library for transforming an Object to another Object

libf2j-java/resolute 0.8.1+dfsg-6build1 all
  Java library port of Fortran numerical libraries

libfailsafe-java/resolute 3.3.2-3 all
  fault tolerance and resilience patterns Java library

libfannj-java/resolute 0.7-1build1 all
  FannJ a Java binding to the Fast Artificial Neural Network (FANN) C library

libfannj-java-doc/resolute 0.7-1build1 all
  FannJ - Documentation

libfastdoubleparser-java/resolute 2.0.1-2 all
  parsers for double, float, BigDecimal and BigInteger values

libfastinfoset-java/resolute 1.2.12-4build1 all
  Java library implementing the Fast Infoset standard

libfastutil-java/resolute 8.5.16+dfsg-1 all
  Java API providing type-specific maps, sets, lists and queues

libfastutil-java-doc/resolute 8.5.16+dfsg-1 all
  API documentation for libfastutil-java

libfelix-bundlerepository-java/resolute 2.0.10-4build1 all
  Felix OSGi bundle repository service

libfelix-bundlerepository-java-doc/resolute 2.0.10-4build1 all
  Documentation for Felix OSGi bundle repository service

libfelix-framework-java/resolute 4.6.1-3build1 all
  Felix Framework subproject

libfelix-framework-java-doc/resolute 4.6.1-3build1 all
  Javadoc API documentation for the Felix Framework subproject

libfelix-gogo-command-java/resolute 0.14.0-3build1 all
  Apache Felix Gogo Command bundle

libfelix-gogo-command-java-doc/resolute 0.14.0-3build1 all
  Documentation for Apache Felix Gogo Command bundle

libfelix-gogo-runtime-java/resolute 0.16.2-2build1 all
  Apache Felix Gogo Runtime bundle

libfelix-gogo-runtime-java-doc/resolute 0.16.2-2build1 all
  Documentation for Apache Felix Gogo Runtime bundle

libfelix-gogo-shell-java/resolute 0.12.0-2build1 all
  Apache Felix Gogo Shell bundle

libfelix-gogo-shell-java-doc/resolute 0.12.0-2build1 all
  Documentation for Apache Felix Gogo Shell bundle

libfelix-main-java/resolute 5.0.0-7build1 all
  Libraries to instantiate and execute the Felix Framework

libfelix-main-java-doc/resolute 5.0.0-7build1 all
  Libraries to instantiate and execute OSGi Felix Framework - doc

libfelix-osgi-obr-java/resolute 1.0.2-5fakesync1build1 all
  OSGi OBR Service API

libfelix-osgi-obr-java-doc/resolute 1.0.2-5fakesync1build1 all
  Javadoc API for OSGi OBR Service API

libfelix-resolver-java/resolute 1.16.0-1build1 all
  OSGi Resolver implementation by Apache Felix

libfelix-scr-java/resolute 2.1.20-2build1 all
  Felix Service Component Runtime

libfelix-scr-java-doc/resolute 2.1.20-2build1 all
  Documentation for Felix Service Component Runtime

libfelix-shell-java/resolute 1.4.3-3build1 all
  Felix OSGi shell to issue commands to the framework

libfelix-shell-tui-java/resolute 1.4.1-5build1 all
  Apache Felix Shell TUI

libfelix-shell-tui-java-doc/resolute 1.4.1-5build1 all
  Documentation for Apache Felix Shell TUI

libfelix-utils-java/resolute 1.8.6-2build1 all
  collection of utility classes for Apache Felix

libfelix-utils-java-doc/resolute 1.8.6-2build1 all
  collection of utility classes for Apache Felix - documentation

libfest-assert-java/resolute 2.0~M10-2build1 all
  Java library that provides a fluent interface for writing assertions

libfest-reflect-java/resolute 1.4.1-4build1 all
  Java library for fluent reflection

libfest-reflect-java-doc/resolute 1.4.1-4build1 all
  Documentation for libfest-reflect-java

libfest-test-java/resolute 2.1.0-2build1 all
  common testing code for FEST (Fixtures for Easy Software Testing) packages

libfest-util-java/resolute 1.2.5-2build1 all
  common utilities for FEST (Fixtures for Easy Software Testing) packages

libfinbin-java/resolute 0.6.2-3build1 all
  finbin - java library for hi-speed byte array search

libfindbugs-annotations-java/resolute 3.1.0~preview2-5 all
  Static java code analyzer to find bugs (Annotations)

libfindbugs-ant-java/resolute 3.1.0~preview2-5 all
  Static java code analyzer to find bugs (Ant tasks)

libfindbugs-java/resolute 3.1.0~preview2-5 all
  Static java code analyzer to find bugs (Library)

libfits-java/resolute 1.21.0-1 all
  Java library for the I/O handling of FITS files

libfits-java-doc/resolute 1.21.0-1 all
  Java library for the I/O handling of FITS files (javadoc)

libflamingo-java/resolute 7.3+dfsg3-6build1 all
  Provides a swing ribbon container for Java applications

libflamingo-java-doc/resolute 7.3+dfsg3-6build1 all
  Provides a swing ribbon container for Java applications (documentation)

libflexdock-java/resolute 1.2.4-3 all
  Swing Java docking framework

libflute-java/resolute 1:1.1.6-5build1 all
  Java CSS parser using SAC (JFree version)

libfontawesomefx-java/resolute 9.1.2-3build1 all
  Font Awesome perfectly integrated into JavaFX

libfontbox-java/resolute 1:1.8.16-5 all
  Java font library

libfontbox2-java/resolute 2.0.29-1 all
  Java font library

libfontchooser-java/resolute 1.0.0-3build1 all
  Java control to allow font selection

libfonts-java/resolute 1.1.6.dfsg2-1 all
  Java fonts layouting library

libfonts-java-doc/resolute 1.1.6.dfsg2-1 all
  Java fonts layouting library -- documentation

libfop-java/resolute 1:2.10+dfsg-2 all
  XML formatter driven by XSL Formatting Objects (XSL-FO.) - libs

libformula-java/resolute 1.1.7.dfsg-5 all
  Excel(tm) style formula expressions library

libformula-java-doc/resolute 1.1.7.dfsg-5 all
  Excel(tm) style formula expressions library

libfreehep-chartableconverter-plugin-java/resolute 2.0-11build1 all
  FreeHEP Character Table Converter

libfreehep-export-java/resolute 2.1.1-5build1 all
  FreeHEP Export and Save As Library

libfreehep-graphics2d-java/resolute 2.4+dfsg-3build1 all
  FreeHEP 2D Graphics Library

libfreehep-graphicsbase-java/resolute 2.4+dfsg-3build1 all
  FreeHEP Graphics Base Library

libfreehep-graphicsio-emf-java/resolute 2.4+dfsg-3build1 all
  FreeHEP Enhanced Metafile Format Driver

libfreehep-graphicsio-java/resolute 2.4+dfsg-3build1 all
  FreeHEP GraphicsIO Base Library

libfreehep-graphicsio-java-java/resolute 2.4+dfsg-3build1 all
  FreeHEP Java Driver

libfreehep-graphicsio-pdf-java/resolute 2.4+dfsg-3build1 all
  FreeHEP Portable Document Format Driver

libfreehep-graphicsio-ps-java/resolute 2.4+dfsg-3build1 all
  FreeHEP (Encapsulated) PostScript Driver

libfreehep-graphicsio-svg-java/resolute 2.4+dfsg-3build1 all
  FreeHEP Scalable Vector Graphics Driver

libfreehep-graphicsio-swf-java/resolute 2.4+dfsg-3build1 all
  FreeHEP SWF (Flash) Driver

libfreehep-graphicsio-tests-java/resolute 2.4+dfsg-3build1 all
  FreeHEP GraphicsIO Test Library

libfreehep-io-java/resolute 2.0.2-7build1 all
  FreeHEP I/O library

libfreehep-swing-java/resolute 2.0.3-6build1 all
  FreeHEP swing extensions

libfreehep-util-java/resolute 2.0.2-8build1 all
  FreeHEP utility library

libfreehep-xml-java/resolute 2.1.2+dfsg1-6build1 all
  FreeHEP XML Library

libfreemarker-java/resolute 2.3.32-2.1 all
  template engine written in Java

libfressian-java/resolute 0.6.6-3build2 all
  extensible binary data notation

libfressian-java-doc/resolute 0.6.6-3build2 all
  extensible binary data notation (documentation)

libfungw-duktape1/resolute 1.2.2-1build1 amd64
  Scripting support for fungw: Javascript

libganymed-ssh2-java/resolute 263-1build1 all
  pure Java implementation of the SSH-2 protocol

libgatk-bwamem-java/resolute 1.0.4+dfsg3-1 all
  interface to call Heng Li's bwa mem aligner from Java code

libgatk-bwamem-jni/resolute 1.0.4+dfsg3-1 amd64
  interface to call Heng Li's bwa mem aligner from Java code (jni)

libgatk-fermilite-java/resolute 1.2.1+dfsg-3 all
  interface to call Heng Li's fermi-lite assembler from Java code

libgatk-fermilite-jni/resolute 1.2.1+dfsg-3 amd64
  interface to call Heng Li's fermi-lite assembler from Java code (jni)

libgatk-native-bindings-java/resolute 1.1.0+dfsg-1 all
  library of native bindings for gatk and picard-tools

libgdcm-java/resolute 3.0.24-9ubuntu1 amd64
  Grassroots DICOM Java bindings

libgenomicsdb-java/resolute 1.5.5-2 all
  sparse array storage library for genomics (Java library)

libgenomicsdb-jni/resolute 1.5.5-2 amd64
  sparse array storage library for genomics (Java native bindings)

libgentlyweb-utils-java/resolute 1.5-2build1 all
  java utility library used by josql

libgentlyweb-utils-java-doc/resolute 1.5-2build1 all
  Documentation - java utility library used by josql

libgeoregression-java/resolute 0.24+ds-1build1 all
  Geometric Regression Library

libgeronimo-annotation-1.3-spec-java/resolute 1.3-1build1 all
  Apache Geronimo Common Annotations 1.3 API

libgeronimo-commonj-spec-java/resolute 1.1.1-4build1 all
  Java API for concurrent programming of EJBs and Servlets

libgeronimo-concurrent-1.0-spec-java/resolute 1.0~alpha-1-2build1 all
  Apache Geronimo Concurrency Utilities for Java EE API

libgeronimo-ejb-3.2-spec-java/resolute 1.0~alpha-1-3build1 all
  Apache Geronimo EJB 3.2 API

libgeronimo-interceptor-3.0-spec-java/resolute 1.0.1-5fakesyncbuild1 all
  Geronimo API implementation of the Interceptor 3.0 spec

libgeronimo-j2ee-connector-1.5-spec-java/resolute 2.0.0-2build1 all
  Geronimo API implementation of the J2EE connector 1.5 spec

libgeronimo-j2ee-management-1.1-spec-java/resolute 1.0.1-2build1 all
  Apache Geronimo J2EE Management 1.1 API

libgeronimo-jacc-1.1-spec-java/resolute 1.0.3-1build1 all
  Geronimo API implementation of the JACC 1.1 spec

libgeronimo-jcache-1.0-spec-java/resolute 1.0~alpha-1-2build1 all
  Apache Geronimo JCache 1.0 API

libgeronimo-jms-1.1-spec-java/resolute 1.1.1-1ubuntu3 all
  Geronimo API implementation of the JMS 1.1 spec

libgeronimo-jpa-2.0-spec-java/resolute 1.1-4build1 all
  Geronimo JSR-317 Java Persistence (JPA) 2.0 Spec API

libgeronimo-jta-1.2-spec-java/resolute 1.0~alpha-1-3build1 all
  Apache Geronimo JTA 1.2 API

libgeronimo-osgi-support-java/resolute 1.1-2build1 all
  Java libraries providing OSGi lookup support for Geronimo projects

libgeronimo-validation-1.0-spec-java/resolute 1.1-4build1 all
  Geronimo JSR-303 Bean Validation Spec API

libgeronimo-validation-1.1-spec-java/resolute 1.0-3build1 all
  Geronimo JSR-349 Bean Validation Spec API

libgeronimo-validation-1.1-spec-java-doc/resolute 1.0-3build1 all
  Documentation for libgeronimo-validation-1.1-spec-java

libgetopt-java/resolute 1.0.14+dfsg-6 all
  GNU getopt - Java port

libgettext-ant-tasks-java/resolute 0.9.7+svn206-2build1 all
  Java classes for internationalization (i18n) - Ant tasks

libgettext-commons-java/resolute 0.9.8-1 all
  Java classes for internationalization (i18n)

libgettext-maven-plugin-java/resolute 1.2.9-5build1 all
  plugin to integrate gettext tools into a Maven build

libghc-hjsmin-dev/resolute 0.2.1-3 amd64
  JavaScript minifier

libghc-hjsmin-doc/resolute 0.2.1-3 all
  JavaScript minifier; documentation

libghc-hjsmin-prof/resolute 0.2.1-3 amd64
  JavaScript minifier; profiling libraries

libghc-hstringtemplate-dev/resolute 0.8.8-5 amd64
  Haskell port of the Java library StringTemplate

libghc-hstringtemplate-doc/resolute 0.8.8-5 all
  Haskell port of the Java library StringTemplate; documentation

libghc-hstringtemplate-prof/resolute 0.8.8-5 amd64
  Haskell port of the Java library StringTemplate; profiling libraries

libghc-jmacro-dev/resolute 0.6.18-3build1 amd64
  library for programmatic generation of JavaScript

libghc-jmacro-doc/resolute 0.6.18-3build1 all
  library for programmatic generation of JavaScript; documentation

libghc-jmacro-prof/resolute 0.6.18-3build1 amd64
  library for programmatic generation of JavaScript; profiling libraries

libghc-language-javascript-dev/resolute 0.7.1.0-5 amd64
  JavaScript parser

libghc-language-javascript-doc/resolute 0.7.1.0-5 all
  JavaScript parser; documentation

libghc-language-javascript-prof/resolute 0.7.1.0-5 amd64
  JavaScript parser; profiling libraries

libghc-yi-mode-javascript-dev/resolute 0.19.1-2 amd64
  Yi editor javascript mode

libghc-yi-mode-javascript-doc/resolute 0.19.1-2 all
  Yi editor javascript mode; documentation

libghc-yi-mode-javascript-prof/resolute 0.19.1-2 amd64
  Yi editor javascript mode; profiling libraries

libgjs-dev/resolute 1.88.0-1 amd64
  Mozilla-based javascript bindings for GNOME - development files

libgjs0/resolute 1.88.0-1 amd64
  Mozilla-based javascript bindings for the GNOME platform

libgkl-java/resolute 0.9.1+dfsg-3 all
  Java library to manipulate SAM and BAM files

libgkl-jni/resolute 0.9.1+dfsg-3 amd64
  native libraries of Java library to manipulate SAM and BAM files

libglazedlists-java/resolute 1.9.1-3 all
  java list transformation library

libglpk-java/resolute 1.12.0-2build2 amd64
  Java binding to the GNU Linear Programming Kit

libgluegen2-build-java/resolute 2.6.0+dfsg-1 all
  tool to automatically generate Java and JNI code (Java sources)

libgluegen2-jni/resolute 2.6.0+dfsg-1 amd64
  tool to automatically generate Java and JNI code (native library)

libgluegen2-rt-java/resolute 2.6.0+dfsg-1 all
  tool to automatically generate Java and JNI code (runtime files)

libgmavenplus-java/resolute 1.8.1-1build1 all
  GMavenPlus Plugin

libgmbal-commons-java/resolute 3.2.1-b003-1.1build1 all
  GlassFish MBean Annotation Library (Common APIs)

libgmbal-java/resolute 4.0.0-b002-1.1build1 all
  GlassFish MBean Annotation Library

libgmbal-pfl-java/resolute 4.0.1-b003-3 all
  GlassFish MBean Annotation Library (Primitive Function Library)

libgmetrics-groovy-java/resolute 0.7-5build1 all
  Groovy library that provides reports and metrics for Groovy code

libgmetrics-groovy-java-doc/resolute 0.7-5build1 all
  Documentation for libgmetrics-groovy-java

libgoby-io-java/resolute 3.3.1+dfsg2-12 all
  IO API for goby

libgoogle-api-client-java/resolute 1.27.1-3build1 all
  Google APIs Client Library for Java

libgoogle-api-services-drive-java/resolute 1.32.1-2build1 all
  Google Drive API Client Library for Java

libgoogle-api-services-sheets-java/resolute 1.32.1-3build1 all
  Google Sheets API Client Library for Java

libgoogle-auth-java/resolute 0.18.0-2build1 all
  Open source authentication client library for Java

libgoogle-auto-common-java/resolute 1.1.2-1build1 all
  Set of common utilities to help ease use of annotation processing

libgoogle-auto-service-java/resolute 1.0.1-1build1 all
  collection of source code generators for Java

libgoogle-auto-value-java/resolute 1.8.2-2build1 all
  Generated immutable value classes for Java 7+

libgoogle-common-protos-java/resolute 1.16.0+ds-2build1 all
  Google common protos for Java

libgoogle-flogger-java/resolute 0.5.1-3build1 all
  Fluent Logging API for Java

libgoogle-gson-java/resolute 2.10.1-1 all
  Converts Java objects into their JSON representation

libgoogle-http-client-java/resolute 1.42.0-2build1 all
  Google HTTP Client Library for Java

libgoogle-oauth-client-java/resolute 1.34.1-2build1 all
  Google OAuth Client Library for Java

libgossip-java/resolute 1.8-3build1 all
  Small and fast logging provider for SLF4J

libgpars-groovy-java/resolute 1.2.1-11 all
  open-source concurrency library for Groovy

libgradle-android-plugin-java/resolute 2.2.2-6build1 all
  Android Plugin for Gradle

libgradle-android-plugin-java-doc/resolute 2.2.2-6build1 all
  Android Plugin for Gradle - Documentations

libgradle-core-java/resolute 4.4.1-22ubuntu1 all
  Powerful build system for the JVM - Core libraries

libgradle-jflex-plugin-java/resolute 0.0.2-5build1 all
  Gradle plugin for JFlex, a scanner generator

libgradle-kotlin-dsl-java/resolute 0.13.2-5build2 all
  Gradle Kotlin DSL

libgradle-plugins-java/resolute 4.4.1-22ubuntu1 all
  Powerful build system for the JVM - All plugins

libgral-java/resolute 0.11-2build1 all
  Java library for displaying plots (graphs, diagrams, and charts)

libgrammatica-java/resolute 1.6+ds-4build1 all
  C# and Java parser generator (compiler compiler)

libgraxxia-java/resolute 1.0.1+dfsg-1build1 all
  Wrappers for doing Mathematics in Groovy

libgrengine-java/resolute 3.1.0+dfsg-1build1 all
  engine for running and embedding Groovy in a Java virtual machine

libgroovycsv-java/resolute 1.3-4 all
  CSV parsing library for Groovy

libgrpc-java/resolute 1.41.3+ds-5build1 all
  Java gRPC implementation, HTTP/2 based RPC

libguava-java/resolute 32.0.1-1build1 all
  Suite of Google common libraries for Java

libguava-mini-java/resolute 0.1.7-1 all
  utilities from Guava

libguava-testlib-java/resolute 32.0.1-1build1 all
  Google Testing Libraries for Java

libguestfs-java/resolute 1:1.58.1-3ubuntu3 amd64
  guest disk image management system - Java bindings

libguice-java/resolute 5.1.0-1build1 all
  lightweight dependency injection framework for Java 5 and above

libh2-java/resolute 2.2.220-1build1 all
  H2 Database Engine

libhac-java/resolute 0.20110510+git20110510.8b2a326-1 all
  hierarchical agglomerative clustering

libhac-java-doc/resolute 0.20110510+git20110510.8b2a326-1 all
  API documentation for hierarchical agglomerative clustering

libhamcrest-java/resolute 2.2-2 all
  library of matchers for building test expressions

libhawtbuf-java/resolute 1.11-2build1 all
  HawtBuf rich byte buffer library

libhawtdispatch-java/resolute 1.22-3build1 all
  libdispatch style API for Java and Scala

libhawtjni-generator-java/resolute 1.18-1build1 all
  HawtJNI Generator

libhawtjni-maven-plugin-java/resolute 1.18-1build1 all
  HawtJNI Maven Plugin

libhawtjni-runtime-java/resolute 1.18-1build1 all
  Java library that provide JNI code generation

libhbci4j-core-java/resolute 4.1.6+dfsg-1 all
  Java online banking client using the HBCI standard

libhbci4j-core-java-doc/resolute 4.1.6+dfsg-1 all
  Documentation for Java online banking client using the HBCI standard

libhdf5-java/resolute 1.14.6+repack-2 all
  HDF5 - Java Wrapper Library

libhdf5-jni/resolute 1.14.6+repack-2 amd64
  native library used by libhdf5-java

libhdrhistogram-java/resolute 2.1.11-1build1 all
  High Dynamic Range (HDR) Histogram

libheadius-options-java/resolute 1.7-1build1 all
  Java library for JVM property-driven configuration

libheadius-options-java-doc/resolute 1.7-1build1 all
  Documentation for headius-options

libhealpix-java/resolute 3.83+ds-1 all
  HEALPix representation of spherical data - Java library

libhealpix-java-doc/resolute 3.83+ds-1 all
  HEALPix representation of spherical data - Java documentation

libhessian-java/resolute 4.0.38-3build1 all
  Java implementation of a binary protocol for web services

libhessian-java-doc/resolute 4.0.38-3build1 all
  Documentation for libhessian-java

libhibernate-commons-annotations-java/resolute 3.2.0.Final-5 all
  Hibernate Commons Annotations

libhibernate-validator-java/resolute 5.3.6-3 all
  Hibernate Validator

libhibernate-validator4-java/resolute 4.3.4-7 all
  Hibernate Validator

libhibernate3-java/resolute 3.6.10.Final-12 all
  Relational Persistence for Idiomatic Java

libhikaricp-java/resolute 2.7.9-1build1 all
  high-performance JDBC connection pool library

libhmsbeagle-java/resolute 4.0.1+dfsg-5 amd64
  High-performance lib for Bayesian and Maximum Likelihood phylogenetics (java)

libhppcrt-java/resolute 0.7.5-2build1 all
  High Performance Primitive Collections RealTime

libhsqldb-java/resolute 2.7.4-1build1 all
  Java SQL database engine

libhsqldb-java-doc/resolute 2.7.4-1build1 all
  documentation for HSQLDB

libhsqldb1.8.0-java/resolute 1.8.0.10+dfsg-14 all
  Java SQL database engine

libhtml-prototype-perl/resolute 1.48-6 all
  module to generate HTML and Javascript for the Prototype library

libhtml5parser-java/resolute 1.4+r20250916-1 all
  validator.nu HTML parser implementation in Java

libhtml5parser-java-doc/resolute 1.4+r20250916-1 all
  Documentation for libhtml5parser-java

libhtmlcleaner-java/resolute 2.29+dfsg-1 all
  Java HTML Parser library

libhtmlcleaner-java-doc/resolute 2.29+dfsg-1 all
  Java HTML Parser library (documentation)

libhtmlparser-java/resolute 1.6.20060610.dfsg0-10 all
  java library to parse html

libhtmlparser-java-doc/resolute 1.6.20060610.dfsg0-10 all
  java library to parse html - doc

libhtrace-core-java/resolute 4.2+dfsg-1build1 all
  Tracing framework for distributed systems written in Java

libhtsjdk-java/resolute 4.3.0+dfsg-1 all
  Java API for high-throughput sequencing data (HTS) formats

libhtsjdk-java-doc/resolute 4.3.0+dfsg-1 all
  Documentation for the java HTSJDK library

libhttp-nio-java/resolute 1.1.1+dfsg-1 all
  http/s file system provider for Java NIO.2

libhttpasyncclient-java/resolute 4.1.5-1.1 all
  HTTP/1.1 compliant asynchronous HTTP agent implementation

libhttpclient-java/resolute 4.5.14-1build1 all
  HTTP/1.1 compliant HTTP agent implementation

libhttpclient5-java/resolute 5.6-1 all
  HTTP/1.1 and HTTP/2 compliant HTTP agent implementation

libhttpcore-java/resolute 4.4.16-1build1 all
  set of low level HTTP transport components for Java

libhttpcore5-java/resolute 5.4-1 all
  set of low level HTTP transport components for Java

libhttpmime-java/resolute 4.5.14-1build1 all
  HTTP/1.1 compliant HTTP agent implementation - MIME extension

libhttpunit-java/resolute 1.7+dfsg-15build1 all
  automated web site testing toolkit

libhttpunit-java-doc/resolute 1.7+dfsg-15build1 all
  documentation for libhttpunit-java

libhyperic-sigar-java/resolute 1.6.4+dfsg-8build1 amd64
  System Information Gatherer And Reporter - Java bindings

libibatis-java/resolute 2.3.4.726-7 all
  iBATIS Data Mapper framework

libicb-utils-java/resolute 2.0.1+git20161002.afee1d9-5build1 all
  Java library of utilities to manage files and compute statistics

libiconloader-java/resolute 0.0+git20170615+dfsg1-2build1 all
  Smart Java Icon Loader with support of HiDPI (Retina) images

libicu4j-4.4-java/resolute 4.4.2.2-4build1 all
  Library for Unicode support and internationalization

libicu4j-java/resolute 73.2-1build1 all
  Library for Unicode support and internationalization

libidm-console-framework-java/resolute 2.0.0-1build1 all
  IDM Console Framework for the 389 Directory Server Console

libidw-java/resolute 1.6.1-2 all
  InfoNode Docking Windows (similar to JInternalFrames)

libidw-java-doc/resolute 1.6.1-2 all
  InfoNode Docking Windows (javadoc)

libij-java/resolute 1.54g-1build1 all
  Java library for ImageJ

libij-java-doc/resolute 1.54g-1build1 all
  documentation of libij-java

libimglib2-java/resolute 4.5.0-2 all
  multidimensional image processing library in Java

libimglib2-java-doc/resolute 4.5.0-2 all
  documentation for ImgLib2

libimgscalr-java/resolute 4.2-2 all
  Java Image Scaling Library

libindigo-java/resolute 1.4.3-1 all
  Organic Chemistry Toolkit (Java package)

libinfomas-asl-java/resolute 3.0.5-3build1 all
  INFOMAS ASL Annotation Detector

libini4j-java/resolute 0.5.4-1build1 all
  Java API for handling Windows ini file format (library)

libinline-java-perl/resolute 0.67-2 amd64
  write Perl classes in Java

libintellij-annotations-java/resolute 23.0.0-2build1 all
  transitional package for libjetbrains-annotations-java

libintellij-annotations-java-doc/resolute 23.0.0-2build1 all
  transitional package for libjetbrains-annotations-java-doc

libintellij-core-java/resolute 183.5153.4-7 all
  IntelliJ IDEA Core API

libintellij-extensions-java/resolute 183.5153.4-7 all
  IntelliJ IDEA Extension Point Framework

libintellij-java-compatibility-java/resolute 1.0.1-2build1 all
  Classes from JDK8 excluded from JDK9

libintellij-jps-model-java/resolute 183.5153.4-7 all
  IntelliJ IDEA Project Model

libintellij-platform-api-java/resolute 183.5153.4-7 all
  IntelliJ IDEA Platform API

libintellij-platform-impl-java/resolute 183.5153.4-7 all
  IntelliJ IDEA Platform Implementation

libintellij-utils-java/resolute 183.5153.4-7 all
  IntelliJ IDEA utility classes

libintervalstorej-java/resolute 1.2+dfsg-5build1 all
  Java implementation of the Nested Containment List data structure

libinvokebinder-java/resolute 1.14-1build1 all
  Java DSL for binding method handles

libirclib-java/resolute 2.0.0~alpha3-1 all
  Java implementation of the IRC protocol

libiscwt-java/resolute 5.5.20131203+dfsg-1 all
  abstractions and Java implementations for rendering PDF

libiscwt-java-doc/resolute 5.5.20131203+dfsg-1 all
  Javadoc API description for isCWT

libisfreetype-java/resolute 5.3.20100629-4 all
  Java wrapper for FreeType font handling library

libisfreetype-java-doc/resolute 5.3.20100629-4 all
  Javadoc API description for isFreeType

libisnativec-java/resolute 5.6.20131203+dfsg-1 all
  helper routines to access native code from Java

libisnativec-java-doc/resolute 5.6.20131203+dfsg-1 all
  Javadoc API description for isNativeC

libisoparser-java/resolute 1.1.22-1build1 all
  Generic parser and writer for ISO 14496 based files

libisorelax-java/resolute 20041111-14build1 all
  Interface for applications to support RELAX Core

libisrt-java/resolute 4.8.20100629-4 all
  common runtime library by intarsys

libisrt-java-doc/resolute 4.8.20100629-4 all
  common runtime library by intarsys (documentation)

libistack-commons-java/resolute 3.0.6-5build1 all
  Common code for some Glassfish projects

libitext-java/resolute 2.1.7-16 all
  Java Library to create and manipulate PDF on the fly

libitext-rtf-java/resolute 2.1.7-16 all
  Java Library to create and manipulate RTF files on the fly

libitext5-java/resolute 5.5.13.4-2 all
  Java Library to create and manipulate PDF on the fly

libj2ssh-java/resolute 0.2.9-6 all
  Java library for the SSH protocol

libj2ssh-java-doc/resolute 0.2.9-6 all
  Java library for the SSH protocol - documentation and examples

libjaba-client-java/resolute 2.2.0-2 all
  minimal client for the JABAWS server

libjackrabbit-java/resolute 2.20.11-1.1 all
  content repository implementation (JCR API)

libjackson-json-java/resolute 1.9.13-2 all
  streaming fast powerful standard conformant json processor in java

libjackson-json-java-doc/resolute 1.9.13-2 all
  standard conformant json processor in java - API documentation

libjackson2-annotations-java/resolute 2.14.0-1build1 all
  fast and powerful JSON library for Java -- annotations

libjackson2-annotations-java-doc/resolute 2.14.0-1build1 all
  Documentation for Jackson-annotations

libjackson2-core-java/resolute 2.14.1-1build1 all
  fast and powerful JSON library for Java -- core library

libjackson2-databind-java/resolute 2.14.0+ds-1build1 all
  fast and powerful JSON library for Java -- data binding

libjackson2-dataformat-smile/resolute 2.7.8-5build1 all
  fast and powerful JSON library for Java -- Smile dataformat

libjackson2-dataformat-xml-java/resolute 2.14.0-1build1 all
  fast and powerful JSON library for Java -- XML dataformat

libjackson2-dataformat-yaml/resolute 2.8.11-5 all
  fast and powerful JSON library for Java -- YAML dataformat

libjackson2-datatype-joda-java/resolute 2.12.1-2build1 all
  fast and powerful JSON library for Java -- Joda datatypes

libjackson2-jaxrs-providers-java/resolute 2.12.1-1build1 all
  Jackson JAX-RS providers

libjackson2-jr-java/resolute 2.14.0-1build1 all
  JSON library for Java -- standalone data-binding module

libjackson2-module-jaxb-annotations-java/resolute 2.8.10-4build1 all
  Fast and powerful JSON library for Java -- JAXB annotations

libjackson2-modules-java8-java/resolute 2.14.2+ds2-3.1 all
  Jackson support modules for Java 8

libjacksum-sugar-java/resolute 1.7.0+ds-1build1 all
  Library building parts of numerical chameleon

libjacoco-java/resolute 0.8.14-1 all
  free code coverage library for Java

libjakarta-activation-java/resolute 2.0.0-1build1 all
  Jakarta Activation

libjakarta-annotation-api-java/resolute 2.1.1-1build1 all
  Annotations for common semantic concepts in the Java SE & Jakarta EE platforms

libjakarta-authentication-api-java/resolute 3.0.0-2build1 all
  Jakarta Authentication API

libjakarta-cdi-api-java/resolute 4.0.1-2build1 all
  Jakarta Contexts and Dependency Injection API

libjakarta-el-api-java/resolute 5.0.1-1build1 all
  Jakarta Expression Language API

libjakarta-inject-api-java/resolute 2.0.1-2build1 all
  Jakarta Inject

libjakarta-interceptor-api-java/resolute 2.2.0-1build1 all
  Jakarta Interceptors API

libjakarta-jsp-api-java/resolute 3.0.0-2 all
  Jakarta Server Pages API

libjakarta-mail-java/resolute 2.0.0-2build1 all
  Jakarta Mail API

libjakarta-servlet-api-java/resolute 6.1.0-2 all
  Jakarta Servlet API

libjakarta-standard-taglib-api-java/resolute 3.0.2-2 all
  Jakarta Standard Tag Library (API)

libjakarta-standard-taglib-impl-java/resolute 3.0.2-2 all
  Jakarta Standard Tag Library (Implementation)

libjakarta-transaction-api-java/resolute 2.0.1-2build1 all
  Jakarta Transactions API

libjakarta-validation-api-java/resolute 3.0.2-1build1 all
  Jakarta Bean Validation API

libjam-java/resolute 0.1.git20240425.aec45be+dfsg-1build1 all
  Java applications look and behave like native applications

libjam-java-doc/resolute 0.1.git20240425.aec45be+dfsg-1build1 all
  Java applications look and behave like native applications (documentation)

libjama-java/resolute 1.0.3-2build1 all
  Basic linear algebra library for Java

libjameica-datasource-java/resolute 2.8.1+dfsg-5build1 all
  OR mapper for Jameica - Java library

libjameica-util-java/resolute 2.8-3build1 all
  utility classes for Jameica - Java library

libjameica-util-java-doc/resolute 2.8-3build1 all
  Documentation for utility classes for Jameica - Java library

libjamm-java/resolute 0.4.0-2build1 all
  Java Agent for Memory Measurements

libjamm-java-doc/resolute 0.4.0-2build1 all
  Documentation for Java Agent for Memory Measurements

libjamon-java/resolute 2.7-8 all
  Java API for easy monitoring production applications

libjanino-java/resolute 3.1.12+dfsg-1build1 all
  runtime compiler for Java expressions - library

libjanino-java-doc/resolute 3.1.12+dfsg-1build1 all
  runtime compiler for Java expressions - documentation

libjansi-java/resolute 2.4.2-1 all
  Java library for generating and interpreting ANSI escape sequences

libjansi-native-java/resolute 1.8-2build1 all
  Java library for ANSI escape sequences - native component

libjansi1-java/resolute 1.18-3.1build1 all
  Java library for generating and interpreting ANSI escape sequences

libjarchivelib-java/resolute 1.2.0-2 all
  simple archiving and compression library for Java

libjargs-java/resolute 1.0.0-5build1 all
  Command-line argument parsing for Java

libjarjar-java/resolute 1.4+svn142-12build1 all
  repackage third-party jars

libjarjar-maven-plugin-java/resolute 1.9-9build1 all
  Maven plugin to repackage third-party jars

libjas-java/resolute 2.7.200-1build1 all
  Java object-oriented type-safe Algebra System

libjas-plotter-java/resolute 2.2.10+dfsg-1build1 all
  JAS(2) Plotter graphic library

libjasypt-java/resolute 1.9.3-1build1 all
  java library for simple high-level encryption

libjasypt-java-doc/resolute 1.9.3-1build1 all
  Documentation - java library for simple high-level encryption

libjatl-java/resolute 0.2.3-2build1 all
  JATL - Java Anti-Template Language

libjaudiotagger-java/resolute 3.0.1+dfsg-1 all
  library for editing tags like ID3 in audio files such as MP3s

libjava-allocation-instrumenter-java/resolute 3.1.0-3build1 all
  JVM agent tracking memory allocations

libjava-classpath-clojure/resolute 1.0.0-1build2 all
  examine the Java classpath from Clojure programs

libjava-data-clojure/resolute 1.2.107-1.1build1 all
  Utilities for working with Java beans from Clojure

libjava-gnome-java/resolute 4.1.3-10ubuntu1 all
  Java-gnome language bindings project

libjava-gnome-jni/resolute 4.1.3-10ubuntu1 amd64
  Java-gnome language bindings project JNI layer

libjava-jdbc-clojure/resolute 0.7.10-1build2 all
  Clojure interface to sql databases via jdbc

libjava-jmx-clojure/resolute 0.3.4-2build2 all
  produce and consume JMX beans from Clojure

libjava-string-similarity-java/resolute 2.0.0-1build1 all
  library of different string similarity and distance measures

libjava-websocket-java/resolute 1.6.0-5 all
  Java WebSocket client and server implementation in Java

libjava-websocket-java-doc/resolute 1.6.0-5 all
  Java WebSocket client and server implementation in Java -- API documentation

libjava-xmlbuilder-java/resolute 0.4-3build1 all
  XML Builder Java library for creating XML documents

libjava3d-java/resolute 1.5.2+dfsg-18build2 all
  Java 3D API (java library)

libjava3d-java-doc/resolute 1.5.2+dfsg-18build2 all
  Documentation for the Java3D API

libjava3d-jni/resolute 1.5.2+dfsg-18build2 amd64
  Java3D API (java jni library)

libjavacc-maven-plugin-java/resolute 2.6-6build1 all
  maven plugin which uses JavaCC to process JavaCC grammar files

libjavaewah-java/resolute 1.2.3-2 all
  Compressed variant of the Java bitset class

libjavafxsvg-java/resolute 1.2.1-3build1 all
  CenterDevice JavaFxSVG library

libjavaparser-java/resolute 3.26.1-1build1 all
  Java library for parsing Java 7

libjavapoet-java/resolute 1.13.0-1build1 all
  Java API for generating .java source files

libjavascript-beautifier-perl/resolute 0.25-3 all
  Perl module to beautify JavaScript code

libjavascript-minifier-perl/resolute 1.16-2 all
  Perl extension for minifying JavaScript code

libjavascript-minifier-xs-perl/resolute 0.15-1build6 amd64
  XS based JavaScript minifier

libjavascript-packer-perl/resolute 2.12+dfsg-1 all
  module to compact JavaScript code

libjavascript-quickjs-perl/resolute 0.21-3 amd64
  Run JavaScript via QuickJS in Perl

libjavascript-rpc-perl/resolute 0.10-2 all
  Perl module to process Remote procedure calls from JavaScript

libjavascriptcoregtk-4.1-0/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK

libjavascriptcoregtk-4.1-dev/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK - development files

libjavascriptcoregtk-6.0-1/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK

libjavascriptcoregtk-6.0-dev/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK - development files

libjavascriptcoregtk-bin/resolute-updates,resolute-security 2.52.3-0ubuntu0.26.04.2 amd64
  JavaScript engine library from WebKitGTK - command-line interpreter

libjavassist-java/resolute 1:3.27.0-1build1 all
  library for editing bytecodes in Java

libjavassist-java-doc/resolute 1:3.27.0-1build1 all
  library for editing bytecodes in Java -- documentation

libjavatuples-java/resolute 1.2-2build1 all
  Java library for tuples in Java.

libjavawriter-java/resolute 2.5.1-2build1 all
  Java API for generating .java source files

libjavawriter-java-doc/resolute 2.5.1-2build1 all
  Documentation for JavaWriter

libjawn-java/resolute 0.11.1+really0.6.0-1build1 all
  Scala json parser

libjaxb-api-java/resolute 2.3.1-1build1 all
  Java Architecture for XML Binding API

libjaxb-java/resolute 2.3.0.1-11build1 all
  JAXB Reference Implementation

libjaxb2-maven-plugin-java/resolute 2.5.0-1build1 all
  JAXB-2 Maven Plugin

libjaxe-java/resolute 3.5-14build1 all
  JAva Xml Editor - library

libjaxe-java-doc/resolute 3.5-14build1 all
  JAva Xml Editor - Library documentation

libjaxen-java/resolute 1.2.0-1 all
  Java XPath engine

libjaxp1.3-java/resolute 1.3.05-6 all
  Java XML parser and transformer APIs (DOM, SAX, JAXP, TrAX)

libjaxrpc-api-java/resolute 1.1.2-2build1 all
  Java API for XML based RPC (JAX-RPC)

libjaxrs-api-java/resolute 2.1.2-2build1 all
  Java API for RESTful Services (JAX-RS)

libjaxws-api-java/resolute 2.3.0-1.1build1 all
  Java API for XML-Based Web Services

libjaxws-java/resolute 2.3.0.2-2build1 all
  JAX-WS Reference Implementation (Library)

libjazzy-java/resolute 0.5.2-3 all
  spell checker java library

libjbbp-java/resolute 2.0.3-1build1 all
  comfortable way to work with binary data in Java

libjbcrypt-java/resolute 0.4-3 all
  Java implementation of OpenBSD's Blowfish hashing

libjbibtex-java/resolute 1.0.20-2 all
  Parser and formatter library

libjboss-bridger-java/resolute 1.6-1build1 all
  Java Bridge Method Maker

libjboss-classfilewriter-java/resolute 1.3.1-1build1 all
  bytecode writer that creates .class files at runtime

libjboss-classfilewriter-java-doc/resolute 1.3.1-1build1 all
  Documentation for JBoss Class File Writer

libjboss-jdeparser2-java/resolute 2.0.3-3build1 all
  Java source code generating library

libjboss-logging-java/resolute 3.5.3-1build1 all
  JBoss Logging Framework

libjboss-logging-java-doc/resolute 3.5.3-1build1 all
  Documentation for the JBoss Logging Framework

libjboss-logging-tools-java/resolute 2.2.1-4build1 all
  create internationalized logger messages and exceptions

libjboss-logmanager-java/resolute 2.1.18-1build1 all
  implementation of java.util.logging.LogManager

libjboss-logmanager-java-doc/resolute 2.1.18-1build1 all
  Documentation for JBoss Log Manager

libjboss-modules-java/resolute 2.1.6-1build1 all
  Modular Classloading System

libjboss-modules-java-doc/resolute 2.1.6-1build1 all
  Documentation for JBoss Modules

libjboss-threads-java/resolute 3.5.0-1build1 all
  JBoss Threads

libjboss-vfs-java/resolute 3.2.15.Final-3build1 all
  JBoss VFS

libjboss-xnio-java/resolute 3.8.10-1build1 all
  simplified low-level I/O layer for NIO

libjboss-xnio-java-doc/resolute 3.8.10-1build1 all
  Documentation for jboss-xnio

libjbzip2-java/resolute 0.9.1-8 all
  bzip2 compression/decompression library

libjcabi-aspects-java/resolute 0.22.6-1build1 all
  Collection of AOP/AspectJ Java Aspects

libjcabi-log-java/resolute 0.19.0-1build1 all
  Static Wrapper of SLF4

libjcdf-java/resolute 1.2.5+dfsg-1 all
  Java library to read files in the NASA Common Data Format

libjcdf-java-doc/resolute 1.2.5+dfsg-1 all
  Library to read files in the NASA Common Data Format (Javadoc)

libjchart2d-java/resolute 3.2.2+dfsg2-3 all
  Java library for precise 2D charting visualizations

libjchart2d-java-doc/resolute 3.2.2+dfsg2-3 all
  Java library for precise 2D charting visualizations -- docs

libjcharts-java/resolute 0.7.5+dfsg-1build1 all
  java based charts library

libjcharts-java-doc/resolute 0.7.5+dfsg-1build1 all
  java based charts library (API docs)

libjcifs-java/resolute 1.3.19+dfsg-1build1 all
  Java library for the CIFS/SMB networking protocol

libjcifs-java-doc/resolute 1.3.19+dfsg-1build1 all
  Documentation for libjcifs-java (CIFS/SMB library for Java)

libjcip-annotations-java/resolute 20060626-6 all
  Java Concurrency In Practice annotations library

libjcm-java/resolute 1.0-2build1 all
  Java Components for Mathematics

libjcm-java-doc/resolute 1.0-2build1 all
  Documentation for Java Components for Mathematics

libjcodings-java/resolute 1.0.58-1build1 all
  Java-based codings helper classes for Joni and JRuby

libjcommander-java/resolute 1.71-4build1 all
  Java framework for parsing command line parameters

libjcommander-java-doc/resolute 1.71-4build1 all
  Java framework for parsing command line parameters (documentation)

libjcommon-java/resolute 1.0.24+ds-2 all
  General Purpose library for Java

libjcommon-java-doc/resolute 1.0.24+ds-2 all
  General Purpose library for Java - documentation

libjcsp-java/resolute 1.1-rc4-3build1 all
  Java library providing Communicating Sequential Processes (CSP) features

libjcsp-java-doc/resolute 1.1-rc4-3build1 all
  Documentation for libjcsp-java

libjctools-java/resolute 4.0.5+dfsg-1build1 all
  Java Concurrency Tools for the JVM

libjdepend-java/resolute 2.10-1 all
  tool to measure design quality of java class and source

libjdependency-java/resolute 2.10-1build1 all
  Java library analyzing class level dependencies

libjdo-api-java/resolute 3.1-3build1 all
  Implementation of JSR 243: Java Data Objects 3.1

libjdom1-java/resolute 1.1.3-3 all
  lightweight and fast library using XML

libjdom1-java-doc/resolute 1.1.3-3 all
  lightweight and fast library using XML - documentation

libjdom2-intellij-java/resolute 2.0.6+git20180529-3 all
  lightweight and fast XML DOM library (IntelliJ version)

libjdom2-java/resolute 2.0.6.1-1 all
  lightweight and fast library using XML

libje-perl/resolute 0.066-4 all
  Pure-Perl ECMAScript (JavaScript) Engine

libjebl2-java/resolute 0.1+git20230701.b3c0f25-1build1 all
  Java Evolutionary Biology Library

libjebl2-java-doc/resolute 0.1+git20230701.b3c0f25-1build1 all
  Java Evolutionary Biology Library (documentation)

libjemmy2-java/resolute 2.3.1.1-4 all
  Java library for automated Java GUI testing

libjemmy2-java-doc/resolute 2.3.1.1-4 all
  Java library for automated Java GUI testing (documentation)

libjempbox-java/resolute 1:1.8.16-5 all
  XMP Compatible Java Library

libjengelman-shadow-java/resolute 4.0.3-3build1 all
  Gradle plugin for creating fat/uber JARs with support for package relocation.

libjenkins-json-java/resolute 2.4-jenkins-8+dfsg-1build1 all
  Library for transforming Java objects between XML and JSON

libjenkins-trilead-ssh2-java/resolute 217-jenkins-8-2build1 all
  Trilead SSH2 implementation for Java (Jenkins variant)

libjep-java/resolute 2.4.1+ds-4build1 all
  Java Expression Parser

libjericho-html-java/resolute 3.4+dfsg-1build1 all
  Java based library for HTML Parsing

libjeromq-java/resolute 0.6.0-1build1 all
  Java implementation of the ZeroMQ messaging library

libjersey1-atom-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (atom module)

libjersey1-client-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (client module)

libjersey1-core-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (core library)

libjersey1-fastinfoset-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (fastinfoset module)

libjersey1-guice-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (guice module)

libjersey1-json-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (json module)

libjersey1-server-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (server module)

libjersey1-servlet-java/resolute 1.19.3-8build1 all
  RESTful Web Services in Java (servlet module)

libjetbrains-annotations-java/resolute 23.0.0-2build1 all
  annotations used for code inspection support and code documentation

libjetbrains-annotations-java-doc/resolute 23.0.0-2build1 all
  documentation for libjetbrains-annotations-java

libjets3t-java/resolute 0.8.1+dfsg-5build1 all
  Java interface to Amazon S3 and CloudFront services

libjettison-java/resolute 1.5.4-1 all
  collection of StAX parsers and writers for JSON

libjetty12-extra-java/resolute 12.0.32-1 all
  Java servlet engine and webserver -- extra libraries

libjetty12-java/resolute 12.0.32-1 all
  Java servlet engine and webserver -- core libraries

libjetty9-extra-java/resolute 9.4.58-1 all
  Java servlet engine and webserver -- extra libraries

libjetty9-java/resolute 9.4.58-1 all
  Java servlet engine and webserver -- core libraries

libjeuclid-core-java/resolute 3.1.9-6 all
  Complete MathML rendering solution (java classes)

libjeuclid-fop-java/resolute 3.1.9-6 all
  Complete MathML rendering solution (fop plugin)

libjexcelapi-java/resolute 2.6.12+dfsg-1build1 all
  Java API to read, write and modify Excel spreadsheets

libjexcelapi-java-doc/resolute 2.6.12+dfsg-1build1 all
  Java API to read, write and modify Excel spreadsheets - documentation

libjffi-java/resolute 1.3.13+ds-1build1 all
  Java Foreign Function Interface

libjffi-jni/resolute 1.3.13+ds-1build1 amd64
  Java Foreign Function Interface (JNI library)

libjflex-maven-plugin-java/resolute 1.7.0-2build1 all
  Maven plugin to generate Lexer code in Java

libjformatstring-java/resolute 0.10~20131207-3build1 all
  Java format string compile-time checker

libjfree-demos-java/resolute 2.0-3 all
  JFree projects Demos programs

libjfree-demos-java-doc/resolute 2.0-3 all
  JFree projects Demos programs Documentation

libjfreechart-java/resolute 1.5.5-1 all
  Chart library for Java

libjfreechart-java-doc/resolute 1.5.5-1 all
  Chart library for Java - documentation

libjfreepdf-java/resolute 2.0.1-5build1 all
  Java library generating PDF from Graphics2D

libjfreepdf-java-doc/resolute 2.0.1-5build1 all
  Java library generatiing PDF from Graphics2D (doc)

libjfreesvg-java/resolute 5.0.6-2 all
  Java graphics library to generate content in SVG format

libjfreesvg-java-doc/resolute 5.0.6-2 all
  Java graphics library to generate content in SVG format (docs)

libjfugue-java/resolute 4.0.3-5build1 all
  Java API for music programming

libjgit-ant-java/resolute 6.7.0-2build1 all
  Java implementation of GIT version control (Ant interface)

libjgit-java/resolute 6.7.0-2build1 all
  Java implementation of GIT version control

libjglobus-axisg-java/resolute 2.1.0-10build1 all
  Globus Java - Apache AXIS support

libjglobus-gram-java/resolute 2.1.0-10build1 all
  Globus Java - Grid Resource Allocation and Management (GRAM)

libjglobus-gridftp-java/resolute 2.1.0-10build1 all
  Globus Java - GridFTP

libjglobus-gss-java/resolute 2.1.0-10build1 all
  Globus Java - GSS-API implementation for SSL with proxies

libjglobus-io-java/resolute 2.1.0-10build1 all
  Globus Java - IO

libjglobus-jsse-java/resolute 2.1.0-10build1 all
  Globus Java - SSL support

libjglobus-myproxy-java/resolute 2.1.0-10build1 all
  Globus Java - MyProxy

libjglobus-parent-java/resolute 2.1.0-10build1 all
  Globus Java - parent pom file

libjglobus-ssl-proxies-java/resolute 2.1.0-10build1 all
  Globus Java - SSL and proxy certificate support

libjgoodies-animation-java/resolute 1.4.3-3 all
  Time-based real-time animations in Java

libjgoodies-binding-java/resolute 2.13.0-3 all
  Swing Data Binding Framework

libjgoodies-common-java/resolute 1.8.1-3 all
  JGoodies Common

libjgoodies-common-java-doc/resolute 1.8.1-3 all
  JGoodies Common library (documentation)

libjgoodies-forms-java/resolute 1.9.0-4 all
  Framework to lay out and implement elegant Swing panels

libjgoodies-looks-java/resolute 2.7.0-3build1 all
  library with Swing look&feel implementations

libjgoodies-looks-java-doc/resolute 2.7.0-3build1 all
  library with Swing look&feel implementations (documentation)

libjgraph-java/resolute 5.12.4.2+dfsg-7 all
  JFC/Swing graph component for Java

libjgraph-java-doc/resolute 5.12.4.2+dfsg-7 all
  JFC/Swing graph component for Java (documentation)

libjgrapht-java/resolute 1.5.2-2 all
  Java library of graph theory data structures and algorithms

libjgrapht0.6-java/resolute 0.6.0-14 all
  mathematical graph theory library for Java

libjgrapht0.8-java/resolute 0.8.3-7 all
  mathematical graph theory library for Java

libjgraphx-java/resolute 2.1.0.7-6 all
  Java Swing Diagramming Library

libjgraphx-java-doc/resolute 2.1.0.7-6 all
  Java Swing Diagramming Library - API documentation and manual

libjgromacs-java/resolute 1.0-2build1 all
  library for molecular dynamics trajectory analysis

libjgromacs-java-doc/resolute 1.0-2build1 all
  library for molecular dynamics trajectory analysis (documentation)

libjgroups-java/resolute 2.12.2.Final-6 all
  Toolkit for Reliable Multicast Communication

libjheaps-java/resolute 0.14-3 all
  Java library with various heap implementations

libjheatchart-java/resolute 0.6-2build1 all
  Heat map charting library for Java

libjheatchart-java-doc/resolute 0.6-2build1 all
  Heat map charting library for Java (documentation)

libjhighlight-java/resolute 1.1.0-1build1 all
  Small embeddable Java library for syntax highlighting

libjhlabs-filters-java/resolute 2.0.235-4 all
  Java Image Processing Filters

libjibx-java/resolute 1.2.6-3 all
  Framework for binding XML data to Java objects (symlink)

libjibx1.2-java/resolute 1.2.6-3 all
  Framework for binding XML data to Java objects

libjibx1.2-java-doc/resolute 1.2.6-3 all
  Framework for binding XML data to Java objects (documentation)

libjiconfont-font-awesome-java/resolute 4.7.0.1-1build1 all
  jIconFont - Font Awesome

libjiconfont-java/resolute 1.0.0-2build1 all
  API to provide icons generated by any icon font

libjiconfont-swing-java/resolute 1.0.1-2build1 all
  jIconFont - Swing support

libjide-oss-java/resolute 3.7.6+dfsg-3 all
  extensible Swing component library for Java

libjimfs-java/resolute 1.1-6build1 all
  In-memory file system implementing the java.nio.file APIs

libjimfs-java-doc/resolute 1.1-6build1 all
  Documentation for libjimfs-java

libjing-java/resolute 20241231+repack-1 all
  RELAX NG validator - library

libjinput-java/resolute 20100502+dfsg-11build2 all
  Java Game Controller API

libjinput-jni/resolute 20100502+dfsg-11build2 amd64
  Java Game Controller API (jni)

libjitescript-java/resolute 0.4.3-1build1 all
  Java API for generating JVM bytecode

libjiu-java/resolute 0.14.3-7build1 all
  library to load, analyze, process and save pixel images

libjiu-java-doc/resolute 0.14.3-7build1 all
  API documentation for jiu java library for pixel images

libjjml-java/resolute 1.1.18-3 all
  Java bindings for ggml libraries such as llama.cpp

libjjml-jni/resolute 1.1.18-3 amd64
  Java bindings for ggml libraries such as llama.cpp (native libs)

libjlapack-java/resolute 0.8~dfsg-7 all
  LAPACK numerical subroutines translated from their Fortran 77 source

libjlatexmath-fop-java/resolute 1.0.7-4 all
  Implementation of LaTeX math mode wrote in Java (fop plugin)

libjlatexmath-java/resolute 1.0.7-4 all
  Implementation of LaTeX math mode wrote in Java

libjlayer-java/resolute 1.0.1-3 all
  library to decode, convert and play MP3 files

libjlha-java/resolute 0.0.20050504-11 all
  LHA compress/decompress library for Java

libjlibeps-java/resolute 0.1.ds3-8 all
  Java library to create EPS images

libjlibeps-java-doc/resolute 0.1.ds3-8 all
  API documentation for jlibeps Java library to create EPS images

libjline-java/resolute 1.0-3build1 all
  Java library for handling console input

libjline-java-doc/resolute 1.0-3build1 all
  Java library for handling console input - documentation

libjline2-java/resolute 2.14.6-6 all
  console input handling in Java

libjline3-java/resolute 3.3.1-4build1 all
  Console input handling library

libjloda-java/resolute 2.1+ds-3 all
  Java library of data structures and algorithms for bioinformatics

libjmac-java/resolute 1.74-8 all
  Open Source Java Monkey's Audio Decoder/Encoder/JavaSound SPI

libjmagick7-java/resolute 6.7.8-6 all
  Java interface to ImageMagick

libjmagick7-jni/resolute 6.7.8-6 amd64
  Java interface to ImageMagick (native library)

libjmdns-java/resolute 3.5.5-1build1 all
  Java implementation of multi-cast DNS (Apple Rendezvous)

libjmdns-java-doc/resolute 3.5.5-1build1 all
  Documentation for Java implementation of multi-cast DNS

libjmh-java/resolute 1.37-3 all
  harness for building, running, and analysing Java benchmarks

libjmock-java/resolute 1.2.0-6build1 all
  Java library for testing code with mock objects

libjmock-java-doc/resolute 1.2.0-6build1 all
  Java library for testing code with mock objects - documentation

libjmock2-java/resolute 2.12.0-1build1 all
  Java library for testing code with mock objects

libjmol-java/resolute 16.2.33+dfsg-1build1 all
  Java library for molecular structures

libjmol-java-doc/resolute 16.2.33+dfsg-1build1 all
  API documentation for libjmol-java

libjna-inchi-java/resolute 1.3.1+dfsg-1build1 all
  wrapper to access InChI from Java

libjna-java/resolute 5.15.0-1build1 all
  Dynamic access of native libraries from Java without JNI

libjna-jni/resolute 5.15.0-1build1 amd64
  Dynamic access of native libraries from Java without JNI (native libs)

libjna-platform-java/resolute 5.15.0-1build1 all
  Dynamic access of native libraries from Java without JNI (platform extension)

libjnacl-java/resolute 1.0-3 all
  Java library implementing NaCl encryption primitives

libjni-inchi-java/resolute 0.8+dfsg-8build1 all
  Java Native Interface wrapper for InChI

libjni-inchi-jni/resolute 0.8+dfsg-8build1 amd64
  Java Native Interface wrapper for InChI (shared library)

libjnlp-servlet-java/resolute 20120126-6build1 all
  simple and convenient packaging format for JNLP applications

libjnr-a64asm-java/resolute 1.0.0-2build1 all
  Pure-java aarch64 assembler

libjnr-constants-java/resolute 0.10.4-2build1 all
  platform constants for Java

libjnr-constants-java-doc/resolute 0.10.4-2build1 all
  platform constants for Java - API documentation

libjnr-enxio-java/resolute 0.32.16-1build1 all
  Java extended native cross-platform I/O library

libjnr-ffi-java/resolute 2.2.15-2build1 all
  Java library for loading native libraries without writing JNI code

libjnr-ffi-java-doc/resolute 2.2.15-2build1 all
  Documentation for libjnr-ffi-java

libjnr-netdb-java/resolute 1.2.0+dfsg-1build1 all
  Lookup TCP and UDP services from java

libjnr-netdb-java-doc/resolute 1.2.0+dfsg-1build1 all
  Documentation for jnr-netdb

libjnr-posix-java/resolute 3.1.18-1build1 all
  basic POSIX-like functions for Java

libjnr-posix-java-doc/resolute 3.1.18-1build1 all
  Java JNR-POSIX library API documentation

libjnr-unixsocket-java/resolute 0.38.21-3 all
  Java access to native libraries for unix sockets

libjnr-unixsocket-java-doc/resolute 0.38.21-3 all
  Java access to native libraries for unix sockets (documentation)

libjnr-x86asm-java/resolute 1.0.2-6build1 all
  Pure java x86 and x86_64 assembler

libjoda-convert-java/resolute 2.2.2-1build1 all
  Joda Convert - Java API to convert Objects to and from Strings

libjoda-time-java/resolute 2.10.14-1 all
  Java date and time API

libjodconverter-java/resolute 2.2.2-16build1 all
  Office formats converter - Library

libjodconverter-java-doc/resolute 2.2.2-16build1 all
  Office formats converter - Library documentation

libjogl2-java/resolute 2.6.0+dfsg-1 all
  Java bindings for OpenGL API

libjogl2-java-doc/resolute 2.6.0+dfsg-1 all
  Documentation for the Java bindings for OpenGL

libjogl2-jni/resolute 2.6.0+dfsg-1 amd64
  Java bindings for OpenGL API (JNI lib)

libjollyday-java/resolute 0.5.10-2build1 all
  holiday calendar

libjolokia-core-java/resolute 1.7.1+dfsg-3build1 all
  access JMX MBeans remotely using JSON over HTTP - core

libjopendocument-java/resolute 1.3repack-1.1 all
  pure Java library for OASIS Open Document files manipulation

libjoptsimple-java/resolute 5.0.4-7build1 all
  Command line parsing java library

libjorbis-java/resolute 0.0.17-3 all
  Pure Java Ogg Vorbis Decoder

libjose-dev/resolute 14-2build1 amd64
  Javascript Object Signing and Encryption (Jos?) - development files

libjose0/resolute 14-2build1 amd64
  Javascript Object Signing and Encryption (Jos?) - library

libjose4j-java/resolute 0.9.6-1 all
  implementation of JSON Web Token (JWT) and the JOSE specification suite

libjosql-java/resolute 2.2+dfsg-2build1 all
  library to apply SQL-like syntax to Java objects

libjpa-2.1-spec-java/resolute 2.1.0.v201304241213-2build1 all
  JPA Spec 2.1 OSGi Bundle

libjpam-java/resolute 0.0~svn33+dfsg-2 all
  bridge between Java and PAM authentication facilities

libjpam-java-doc/resolute 0.0~svn33+dfsg-2 all
  bridge between Java and PAM authentication facilities (javadoc)

libjpathwatch-java/resolute 0.95-5build2 all
  Java library that monitors directories for changes

libjpathwatch-java-doc/resolute 0.95-5build2 all
  Java library that monitors directories for changes (documentation)

libjpathwatch-java-jni/resolute 0.95-5build2 amd64
  Java library that monitors directories for changes (JNI)

libjpedal-jbig2-java/resolute 20100117-1.2 all
  library for accession of large images

libjpegxl-java/resolute-updates,resolute-security 0.11.1-6ubuntu4.2 amd64
  JPEG XL Image Coding System - "JXL" (java bindings)

libjpf-java/resolute 1.5.1+dfsg-5 all
  Java Plugin Framework: plug-in infrastructure library for Java projects

libjpfcodegen-java/resolute 0.4+dfsg1-2 all
  tool for generating classes from JPF plug-ins

libjregex-java/resolute 1.2.01-2 all
  regular expressions for Java

libjrosetta-java/resolute 1.0.4-7 all
  JRosetta - Advanced graphical console engine

libjruby-joni-java/resolute 2.2.1-1build1 all
  Java port of Oniguruma regexp library

libjruby-maven-plugin-java/resolute 3.0.1-3 all
  Maven plugins to handle Ruby gems in a Maven compatible way

libjruby-mavengem-maven-plugin-java/resolute 2.0.1-2build1 all
  Mavengem Protocol and Mavengem Wagon

libjs-arbiter/resolute 1.0-5build1 all
  Lightweight publish/subscribe library for client-side JavaScript

libjs-autolink/resolute 1.0.2+dfsg2-5 all
  JavaScript methods converting text to links

libjs-backbone/resolute 1.4.1~dfsg+~1.4.15-4 all
  some Backbone for JavaScript applications - browser library

libjs-bootstrap-tour/resolute 0.12.0+dfsg-6 all
  Build product tours (JavaScript library)

libjs-chartkick.js/resolute 4.1.0-2build1 all
  create beautiful JavaScript charts with minimal code

libjs-codemirror/resolute 5.65.20+~cs5.83.25-1 all
  JavaScript editor interface for code-like content

libjs-cropper/resolute 1.2.2-2build1 all
  JavaScript image cropper UI

libjs-cssom/resolute 0.5.0-1 all
  CSS parser written in pure JavaScript

libjs-cssrelpreload/resolute 3.1.0+dfsg+~cs3.1.3-1 all
  JavaScript to load CSS asynchronously

libjs-d3/resolute 3.5.17-4build1 all
  JavaScript visualization library for HTML and SVG

libjs-dateformat/resolute 5.0.3+~5.0.3-1 all
  JavaScript Date Format - browser module

libjs-debugger/resolute 0.5-5build1 all
  Console logger for debugging JavaScript

libjs-dojo-core/resolute 1.17.3+dfsg1-1build1 all
  modular JavaScript toolkit

libjs-dojo-dijit/resolute 1.17.3+dfsg1-1build1 all
  modular JavaScript toolkit - Dijit

libjs-dojo-dojox/resolute 1.17.3+dfsg1-1build1 all
  modular JavaScript toolkit - DojoX

libjs-dropzone/resolute 5.7.2+dfsg-2 all
  JavasScript library providing Dropzone

libjs-dygraphs/resolute 2.2.1-4build1 all
  fast and flexible JavaScript charting library

libjs-edit-area/resolute 0.8.2-2 all
  javascript editor for source code

libjs-elycharts/resolute 2.1.5+ds-5build1 all
  Javascript library to generate static and interactive charts

libjs-emojify/resolute 1.1.0+dfsg-3 all
  JavaScript library converting Emoji keywords to images

libjs-es5-shim/resolute 4.6.7-2 all
  ECMAScript 5 compatibility shims for old JavaScript engines (library)

libjs-es6-promise/resolute 4.2.8-12 all
  Lightweight async code library for JavaScript

libjs-es6-shim/resolute 0.35.6+ds+~0.31.42-2 all
  ECMAScript 6 shims for legacy JavaScript engines (library)

libjs-expect.js/resolute 0.3.1+dfsg+~0.3.29-2 all
  behavior driven test assertions - JavaScript library

libjs-gordon/resolute 0~git20101011-3.1build1 all
  Open source flash runtime written in pure javascript

libjs-headjs/resolute 1.0.3+dfsg.1-5 all
  javascript libraryt for resource loading

libjs-highlight.js/resolute 10.7.3+dfsg-2 all
  JavaScript library for syntax highlighting

libjs-hooker/resolute 0.2.3+~0.2.35-1 all
  Useful javascript debugging library usable in a browser

libjs-htmx/resolute 2.0.8-1 all
  framework for performing various javascript actions from html

libjs-i18next/resolute 23.7.6-1build2 all
  internationalization framework for JavaScript environments - js library

libjs-impress/resolute 1.1.0-2build1 all
  JavaScript library to make animated presentations

libjs-ipaddr/resolute 2.3.0~dfsg-1 all
  IPv4 and IPv6 addresses manipulation - JavaScript library

libjs-is-typedarray/resolute 1.0.0+~1.0.2-2 all
  JavaScript library checking if object is TypedArray

libjs-iscroll/resolute 5.2.0+dfsg1-3 all
  High performance, small footprint JavaScript scroller

libjs-ismobilejs/resolute 0.5.0-4build1 all
  JavaScript library to detect mobile devices (lib)

libjs-jac/resolute 1.3.4+dfsg-3build1 all
  JavaScript Jabber Client Library

libjs-janus-gateway/resolute 1.1.2-4 all
  general purpose WebRTC server/gateway - JavaScript library

libjs-jed/resolute 1.1.1-4 all
  Gettext Style i18n for Modern JavaScript Apps - JavaScript library

libjs-jquery/resolute 3.7.1+dfsg+~3.5.33-1build1 all
  JavaScript library for dynamic web applications

libjs-jquery-geo/resolute 1.1.0+ds-6build1 all
  JavaScript mapping API

libjs-jquery-ui/resolute 1.13.2+dfsg-1build1 all
  JavaScript UI library for dynamic web applications

libjs-jsencrypt/resolute 2.3.0+dfsg2-3 all
  RSA Encryption in JavaScript

libjs-jshash/resolute 2.2-5build1 all
  calculate secure hash algorithms in JavaScript

libjs-json/resolute 0~20221030+~1.0.8-1build1 all
  JSON encoders/decoders implemented in JavaScript

libjs-jsrender/resolute 1.0~pre21-3build1 all
  JavaScript template rendering system

libjs-jsxc/resolute 3.4.4+dfsg-2 all
  JavaScript XMPP Client

libjs-jush/resolute 2.1.3-1 all
  JavaScript Syntax Highlighter

libjs-knowl/resolute 0~20190101-2build1 all
  JavaScript library for transclusion of supplementary information

libjs-less/resolute 3.13.0+dfsg-13 all
  LESS CSS meta-language - Javascript library

libjs-lightbox2/resolute 2.11.4+dfsg-1build1 all
  small javascript library used to overlay images

libjs-lodash/resolute 4.17.23+dfsg-1 all
  Lo-dash is a Javascript utility library

libjs-luxon/resolute 3.7.2+~3.7.1-3 all
  Wrapper for JavaScript dates and times - Browser module

libjs-markdown-it-sub/resolute 1.0.0-4 all
  javascript markdown parser subscript plugin

libjs-mathjax/resolute 2.7.9+dfsg-1build1 all
  JavaScript display engine for LaTeX and MathML

libjs-mathjax-doc/resolute 3.2+20240903-1build1 all
  JavaScript display engine for LaTeX and MathML (documentation)

libjs-merge/resolute 2.1.1+ds-5 all
  JavaScript utility for merging multiple objects into one.

libjs-modernizr/resolute 3.13.0-0.1build1 all
  JavaScript library to detect HTML5 and CSS3 features in the user's browser

libjs-moment/resolute 2.30.1+ds-1 all
  Work with dates in JavaScript (library)

libjs-mootools/resolute 1.4.5~debian1-3build1 all
  compact JavaScript framework

libjs-mousetrap/resolute 1.6.5+dfsg1-1 all
  library for handling keyboard shortcuts in Javascript

libjs-mustache/resolute 3.0.1-2 all
  Mustache rendering engine for Javascript

libjs-n3/resolute 1.16.3+~1.2.3+~1.10.4-3 all
  fast asynchronous streaming RDF for JavaScript - browser library

libjs-nouislider/resolute 15.8.1+ds-2 all
  lightweight JavaScript range slider (browser)

libjs-of-ocaml/resolute 6.2.0-2build6 amd64
  OCaml bytecode to JavaScript compiler (runtime)

libjs-of-ocaml-dev/resolute 6.2.0-2build6 amd64
  OCaml bytecode to JavaScript compiler (development files)

libjs-of-ocaml-doc/resolute 6.2.0-2build6 all
  OCaml bytecode to JavaScript compiler (documentation)

libjs-of-ocaml-ocamlbuild-ocaml-dev/resolute 5.0-2build10 amd64
  compiler from OCaml bytecode to JavaScript (ocamlbuild plugin)

libjs-openlayers/resolute 2.13.1+ds2-11build1 all
  JavaScript library for displaying map data in web browsers

libjs-php-date-formatter/resolute 1.3.6+ds-3 all
  Manipulate date/times using PHP date-time formats in javascript

libjs-popper.js/resolute 1.16.1+ds-7 all
  Javascript library to position poppers in web applications

libjs-prototype/resolute 1.7.3-2build1 all
  JavaScript Framework for dynamic web applications

libjs-q/resolute 1.5.1-4 all
  JavaScript library for promises (CommonJS/Promises/A,B,D)

libjs-queue-async/resolute 1.0.7-3 all
  asynchronous helper library for JavaScript

libjs-qunit/resolute 1.23.1~dfsg-3.2 all
  JavaScript Unit Testing framework

libjs-rainbow/resolute 2.1.7+ds-3 all
  code syntax highlighting library written in Javascript

libjs-raphael/resolute 2.3.0-4build1 all
  JavaScript library to work with vector graphics

libjs-regenerate/resolute 1.4.2-3 all
  Unicode-aware regular expression generator (JavaScript library)

libjs-requirejs/resolute 2.3.8+ds+~2.1.37-1 all
  JavaScript file and module loader

libjs-reqwest/resolute 2.0.5+dfsg-2 all
  javascript wrapper for asynchronous HTTP requests

libjs-rickshaw/resolute 1.5.1.dfsg-6 all
  JavaScript toolkit for interactive time series graph

libjs-rx/resolute 4.1.0+dfsg1-3 all
  Reactive Extensions for JavaScript

libjs-sax/resolute 1.2.4+~1.2.4-3build1 all
  event-based streaming XML parser - JavaScript library

libjs-sciencejs/resolute 1.9.3+dfsg-5 all
  JavaScript library for scientific and statistical computing

libjs-scriptaculous/resolute 1.9.0-6 all
  JavaScript library for dynamic web applications

libjs-simile-timeline/resolute 2.3.0+dfsg1-8build1 all
  JavaScript library for web-based interactive timelines

libjs-simplemde/resolute 1.11.2+dfsg2-3build1 all
  JavaScript library providing a simple Markdown editor

libjs-simulate-event/resolute 1.4.0-2build1 all
  JavaScript library to trigger DOM events on any element

libjs-sink-test/resolute 1.0.2-5 all
  Asynchronous JavaScript Unit Testing Framework

libjs-sizzle/resolute 2.3.10+ds+~2.3.6-1build1 all
  Pure-JavaScript CSS selector engine

libjs-sortable/resolute 1.15.0+ds-1build1 all
  JavaScript library for reorderable drag-and-drop lists

libjs-sortable-tablesort/resolute 3.1.0+ds-2build1 all
  Tiny plain JavaScript table sorter

libjs-source-map/resolute 0.7.0++dfsg2+really.0.6.1-15 all
  Mozilla source map generator and consumer - JavaScript library

libjs-sphinxdoc/resolute 8.2.3-12 all
  JavaScript support for Sphinx documentation

libjs-sprintf-js/resolute 1.1.3+ds1+~1.1.4-2 all
  JavaScript sprintf implementation

libjs-stringmap/resolute 0.2.2+20130926-5 all
  fast and robust stringmap (JavaScript lib)

libjs-term.js/resolute 0.0.7-4 all
  full xterm clone written in javascript

libjs-text-encoding/resolute 0.7.0-5 all
  Polyfill for the Encoding Living Standard's API (JavaScript lib)

libjs-toastr/resolute 2.1.4~ds-5 all
  JavaScript library for non-blocking notifications

libjs-traverse/resolute 0.6.7+~0.6.32-1 all
  recursively traverse objects in Javascript

libjs-uglify-js/resolute 3.17.4-3 all
  JavaScript parser, mangler/compressor and beautifier - browser library

libjs-underscore/resolute 1.13.8~dfsg+~1.13.0-1 all
  JavaScript's functional programming helper library

libjs-util/resolute 0.12.5+~1.0.10-2 all
  JavaScript util module

libjs-vue/resolute 2.6.14+dfsg1-3 all
  Core library of the Vue JavaScript framework, browser build

libjs-zeparser/resolute 0.0.7+dfsg-6build1 all
  Javascript library for parsing Javascript code

libjsamp-java/resolute 1.3.9-1build1 all
  Java Simple Application Messaging Protocol library

libjsamp-java-doc/resolute 1.3.9-1build1 all
  Java Simple Application Messaging Protocol library docs

libjsap-java/resolute 2.1-5build1 all
  Java Simple Argument Parser

libjsap-java-doc/resolute 2.1-5build1 all
  Java Simple Argument Parser (documentation)

libjsch-agent-proxy-java/resolute 0.0.9-1build1 all
  Proxy to ssh-agent and Pageant in Java

libjsch-java/resolute 0.2.19-1build1 all
  Java implementation of the SSH2 protocol

libjsf-api-java/resolute 2.2.8-6build1 all
  JavaServer Faces 2.2 Java EE web framework - API

libjsf-java-doc/resolute 2.2.8-6build1 all
  Documentation for libjsf-api-java

libjsilver-aosp-java/resolute 10.0.0+r36-1build1 all
  Pure-Java implementation of Clearsilver

libjsofa-java/resolute 0~20210512-1build1 all
  Pure Java translation of the IAU's C SOFA software library

libjsofa-java-doc/resolute 0~20210512-1build1 all
  Pure Java translation of the IAU's C SOFA software library (docs)

libjson-java/resolute 3.2.0+dfsg-2 all
  library for transforming Java objects and XML to JSON and back again

libjson-simple-doc/resolute 2.3.0-2build1 all
  documentation for libjson-simple-java

libjson-simple-java/resolute 2.3.0-2build1 all
  Simple, lightweight and efficient JSON toolkit for Java

libjson-smart-java/resolute 2.5.2-1 all
  JSON Small and Fast Parser

libjson4s-java/resolute 3.5.1+really3.2.10-1build1 all
  Single AST to be used by other scala json libraries

libjsonb-api-java/resolute 1.0-2build1 all
  Java API for JSON Binding (JSON-B)

libjsonld-java/resolute 0.13.6-1build1 all
  Java implementation of JSON-LD 1.0 and JSON-LD-API 1.0 specifications

libjsonp-java/resolute 1.1.2-4 all
  Java API for JSON Processing

libjsonp2-java/resolute 2.1.3-1 all
  Jakarta JSON Processing

libjsonpath-java/resolute 2.0.0-5build1 all
  Jayway JsonPath - XPath like expressions for JSON

libjsoup-java/resolute 1.15.3-1build1 all
  Java HTML parser that makes sense of real-world HTML soup

libjsoup-java-doc/resolute 1.15.3-1build1 all
  Documentation for jsoup HTML Parser

libjsp-api-java/resolute 2.3.4-3build1 all
  JavaServer Pages API

libjspeex-java/resolute 0.9.7-5 all
  Java Implementation of Speex

libjsr166y-java/resolute 1.7.0-3 all
  Parallel computation framework for Java

libjsr166y-java-doc/resolute 1.7.0-3 all
  Documentation for libjsr166y-java

libjsr305-java/resolute 0.1~+svn49-12 all
  Java library that provides annotations for software defect detection

libjsr305-java-doc/resolute 0.1~+svn49-12 all
  Java library that provides annotations for software defect detection (API)

libjsr311-api-java/resolute 1.1.1-2 all
  JSR 311, JAX-RS, Java API for RESTful Web Services

libjsr311-api-java-doc/resolute 1.1.1-2 all
  JSR 311, JAX-RS, Java API for RESTful Web Services - documentation

libjss-java/resolute 5.9.0~beta3-3ubuntu1 amd64
  Network Security Services for Java

libjssc-java/resolute 2.8.0-4build2 amd64
  library for working with serial ports from Java

libjstun-java/resolute 0.7.3+dfsg-2build1 all
  Java-based STUN implementation

libjstun-java-doc/resolute 0.7.3+dfsg-2build1 all
  Java-based STUN implementation (documentation)

libjswingreader-java/resolute 0.3-4 all
  RSS NewsFeed reader for Java

libjsyntaxpane-java/resolute 0.9.6~r156-7.1 all
  Java EditorPane with support for Syntax Highlighting

libjsyntaxpane-java-doc/resolute 0.9.6~r156-7.1 all
  Java EditorPane with support for Syntax Highlighting (javadoc files)

libjt400-java/resolute 9.4-2 all
  Java database (JDBC) driver for IBM DB2

libjtds-java/resolute 1.3.1+dfsg-2 all
  JDBC 3.0 driver for Microsoft SQL Server(tm) and Sybase(tm)

libjtharness-java/resolute 6.0-b24-1build1 all
  General purpose test harness for Java

libjtidy-java/resolute 7+svn20110807-6build1 all
  JTidy HTML syntax checker and pretty printer

libjtidy-java-doc/resolute 7+svn20110807-6build1 all
  JTidy HTML syntax checker and pretty printer (documentation)

libjts-java/resolute 1.20.0+ds-2build1 all
  JTS Topology Suite

libjts-java-doc/resolute 1.20.0+ds-2build1 all
  Documentation for the JTS Topology Suite

libjtype-java/resolute 0.1.3-5 all
  Helper library for the Java 5 Type

libjug-java/resolute 3.1.5-2build1 all
  Pure java UUID generator

libjuh-java/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  transitional package for LibreOffice UNO runtime environment

libjumbo-java/resolute 6.0+dfsg-2build1 all
  Java library for processing CML

libjung-free-java/resolute 2.1.1-3 all
  Java Universal Network/Graph Framework

libjung-free-java-doc/resolute 2.1.1-3 all
  Java Universal Network/Graph Framework (documentation)

libjunit5-system-exit-java/resolute 2.0.2-1 all
  JUnit5 Extension to help write tests that call System.exit()

libjuniversalchardet-java/resolute 2.5.0-1 all
  encoding detector library (Java port of the Mozilla library)

libjunixsocket-java/resolute 2.6.1-1build2 all
  Unix Domain Sockets in Java

libjunixsocket-jni/resolute 2.6.1-1build2 amd64
  Unix Domain Sockets in Java (JNI library)

libjurt-java/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  transitional package for LibreOffice UNO runtime environment

libjutils-java/resolute 20100502+dfsg-5build1 all
  Common utilities for Java Game Technology Group projects

libjws-api-java/resolute 1.1-2build1 all
  Java EE Web Services Metadata API (JSR 181)

libjxgrabkey-java/resolute 0.3.2-10build3 all
  X11 hotkey API for java

libjxgrabkey-jni/resolute 0.3.2-10build3 amd64
  X11 hotkey API for java (jni backend)

libjxmpp-java/resolute 1.0.1-5 all
  base library for XMPP based instant messaging and presence

libjxp-java/resolute 1.6.1-7 all
  Java template engine/script processor

libjzlib-java/resolute 1.1.3-3build1 all
  Java Zlib implementation

libkazocsaba-imageviewer-java/resolute 1.2.3-2build1 all
  Swing image viewer component

libkdgcommons-java/resolute 1.0.17-1build1 all
  utility library for web programming

libkmlframework-java/resolute 0.0.git20150825.a2e0518-1build1 amd64
  library/framework for generating Google Earth KML

libknopflerfish-osgi-framework-java/resolute 6.1.1-4build1 all
  Java framework implementing the OSGi R6 version

libkotlinx-atomicfu-java/resolute 0.11.12-2build3 all
  AtomicFU - Idiomatic atomic operations in Kotlin

libkotlinx-coroutines-java/resolute 1.0.1-2build2 all
  Library support for Kotlin coroutines

libkryo-java/resolute 2.20-8 all
  object graph serialization framework for Java

libkryo2-java/resolute 2.20-9.1 all
  object graph serialization framework for Java

libkxml2-java/resolute 2.3.0+ds1-3build1 all
  small XML parser, designed for small environments

libkxml2-java-doc/resolute 2.3.0+ds1-3build1 all
  small XML parser, designed for small environments - docs

libla4j-java/resolute 0.6.0-4 all
  Linear Algebra for Java

liblaf-plugin-java/resolute 7.3+dfsg3-6build1 all
  Support for third-party components in Java look-and-feel libraries

liblaf-plugin-java-doc/resolute 7.3+dfsg3-6build1 all
  Support for third-party components in Java look-and-feel libraries (doc)

liblaf-widget-java/resolute 7.3+dfsg3-6build1 all
  Java widget toolbox for other look-and-feel libraries

liblaf-widget-java-doc/resolute 7.3+dfsg3-6build1 all
  Java widget toolbox for look-and-feel libraries - documentation

liblanguage-detector-java/resolute 0.6-2 all
  Language Detection Library for Java

liblastfm-java/resolute 1:0.1.2-1 all
  last.fm API bindings for Java

liblayout-java/resolute 0.2.10-5build1 all
  Java layouting framework

liblcm-java/resolute 1.5.0~repack1-0ubuntu4 all
  Lightweight Communications and Marshalling - Java Interface

libldap-java/resolute 5.5.0+dfsg1-1build1 all
  Netscape Directory SDK for Java

libldaptive-java/resolute 2.1.2-1build1 all
  simple, extensible Java API for interacting with LDAP servers

liblessen-java/resolute 1.0-2 all
  lightweight CSS+LESS parser written in Java

libleveldb-api-java/resolute 0.7-2build1 all
  High level Java API for LevelDB

libleveldb-java/resolute 0.7-2build1 all
  Port of LevelDB to Java

liblgooddatepicker-java/resolute 11.2.1+ds-1build1 all
  Java Swing Date Picker library

liblgooddatepicker-java-doc/resolute 11.2.1+ds-1build1 all
  documentation for the LGoodDatePicker library

liblibreoffice-java/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  LibreOffice UNO runtime environment -- Java library

liblightcouch-java/resolute 0.2.0-1build1 all
  LightCouch - CouchDB Java API

liblightvalue-generator-java/resolute 0.8.1-1.1build1 all
  Generator of lightweight Java value/model classes

liblightvalue-gradle-plugin-java/resolute 0.8.1-1.1build1 all
  Gradle plugin for LightValue generator

liblink-grammar-java/resolute 5.13.0+dfsg-1build1 amd64
  Carnegie Mellon University's link grammar parser (JNI library)

liblivetribe-jsr223-java/resolute 2.0.7-1build1 all
  Implementation of JSR 223: Scripting for Java

liblizzie-java/resolute 0.7.4+dfsg1-4build1 all
  GUI for analyzing Go games in real time using Leela Zero

libloader-java/resolute 1.1.6.dfsg-5build1 all
  Java general purpose resource loading framework

libloader-java-doc/resolute 1.1.6.dfsg-5build1 all
  Java general purpose resource loading framework -- documentation

liblocalizer-java/resolute 1.13-4build1 all
  type-safe access to message resources

liblog4cplus-2.0.5t64/resolute 2.0.8-1.1ubuntu4 amd64
  C++ logging API modeled after the Java log4j API - shared library

liblog4cplus-dev/resolute 2.0.8-1.1ubuntu4 amd64
  C++ logging API modeled after the Java log4j API - development library

liblog4cplus-doc/resolute 2.0.8-1.1ubuntu4 all
  C++ logging API modeled after the Java log4j API - doxygen documentation

liblog4j-extras1.2-java/resolute 1.2.17-3build1 all
  Extras for Apache log4j

liblog4j1.2-java/resolute 1.2.17-11build1 all
  Logging library for java

liblog4j1.2-java-doc/resolute 1.2.17-11build1 all
  Documentation for liblog4j1.2-java

liblog4j2-java/resolute 2.19.0-2build1 all
  Apache Log4j - Logging Framework for Java

liblogback-java/resolute 1:1.2.11-6build1 all
  flexible logging library for Java

liblogstash-logback-encoder-java/resolute 7.2-2build1 all
  Logstash Logback Encoder

liblombok-ast-java/resolute 0.2+ds-7build1 all
  Robust parser + AST for the Java language

liblombok-java/resolute 1.18.42-1 all
  Reduce boilerplate code in Java projects

liblombok-patcher-java/resolute 0.50-1build1 all
  live-rewrite classes as a JVM runs

liblouisutdml-java/resolute 2.12.0-8build1 all
  Braille UTDML translation library - java bindings

liblouisutdml-java-doc/resolute 2.12.0-8build1 all
  Braille UTDML translation library - java bindings documentation

liblttng-ust-agent-java/resolute 2.14.0-1.1 all
  LTTng 2.0 Userspace Tracer (Java agent library)

liblttng-ust-agent-java-jni/resolute 2.14.0-1.1 amd64
  LTTng 2.0 Userspace Tracer (Java agent JNI interface)

liblttng-ust-java/resolute 2.14.0-1.1 all
  LTTng 2.0 Userspace Tracer (Java support library)

liblttng-ust-java-jni/resolute 2.14.0-1.1 amd64
  LTTng 2.0 Userspace Tracer (JNI interface)

liblucene3-contrib-java/resolute 3.6.2+dfsg-27 all
  Full-text search engine library for Java - additional libraries

liblucene3-java/resolute 3.6.2+dfsg-27 all
  Full-text search engine library for Java - core library

liblucene4.10-java/resolute 4.10.4+dfsg-8 all
  Full-text search engine library for Java(TM)

liblucene8-java/resolute 8.8.1-5build1 all
  Full-text search engine library for Java(TM)

liblucene9-java/resolute 9.12.3+dfsg-1 all
  text search engine library

liblwjgl-java/resolute 2.9.3+dfsg-6build2 all
  Lightweight Java Game Library

liblwjgl-java-doc/resolute 2.9.3+dfsg-6build2 all
  Lightweight Java Game Library (javadoc)

liblwjgl-java-jni/resolute 2.9.3+dfsg-6build2 amd64
  Lightweight Java Game Library (jni)

liblz4-java/resolute 1.8.0-4build2 all
  LZ4 compression for Java

liblz4-jni/resolute 1.8.0-4build2 amd64
  LZ4 compression for Java (JNI library)

libmac-widgets-java/resolute 0.10.0+svn416-dfsg1-5 all
  collection of Mac style widgets written in Java

libmail-java/resolute 1.6.5-3build1 all
  JavaMail API Reference Implementation

libmalai-java/resolute 2.0+ds1-3build1 all
  Malai software architecture pattern in Java

libmapscript-java/resolute 8.6.0-1build1 amd64
  Java library for MapServer

libmapsforge-java/resolute 0.20.0-2 all
  vector map library and writer

libmapsforge-java-doc/resolute 0.20.0-2 all
  vector map library and writer (documentation)

libmarc4j-java/resolute 2.9.5-1 all
  API for working with MARC and MARCXML in Java

libmariadb-java/resolute 2.7.6-1build1 all
  Java database driver for MariaDB and MySQL

libmatthew-debug-java/resolute 0.8.1-4build1 all
  Debugging library for Java

libmatthew-io-java/resolute 0.8.1-4build1 all
  Extra IO library for Java

libmatthew-java-doc/resolute 0.8.1-4build1 all
  API documentation for the libmatthew-java libraries

libmaven-antrun-extended-plugin-java/resolute 1.43-2build1 all
  Extended integration between Maven and Ant

libmaven-antrun-plugin-java/resolute 3.1.0-1build1 all
  Maven AntRun Plugin

libmaven-archiver-java/resolute 3.6.2-1build1 all
  Archiver component for Maven

libmaven-artifact-transfer-java/resolute 0.13.1-3 all
  Apache Maven Artifact Transfer

libmaven-assembly-plugin-java/resolute 3.4.2-2build1 all
  Maven Assembly Plugin

libmaven-bundle-plugin-java/resolute 3.5.1-3build1 all
  Maven plugin to handle artifact OSGi metadata

libmaven-clean-plugin-java/resolute 3.2.0-2build1 all
  Maven clean plugin

libmaven-common-artifact-filters-java/resolute 3.4.0-1build1 all
  Maven Common Artifact Filters

libmaven-compiler-plugin-java/resolute 3.13.0-1build1 all
  Maven Compiler plugin

libmaven-dependency-analyzer-java/resolute 1.15.1-1build1 all
  Maven Dependency Analyzer

libmaven-dependency-plugin-java/resolute 3.8.1-1build1 all
  Maven Dependency Plugin

libmaven-dependency-tree-java/resolute 3.3.0-1build1 all
  Maven Dependency Tree

libmaven-deploy-plugin-java/resolute 3.1.4-1build1 all
  Maven Deploy plugin

libmaven-ejb-plugin-java/resolute 3.2.1-2build1 all
  Maven EJB Plugin

libmaven-enforcer-plugin-java/resolute 3.5.0-1build1 all
  Maven build rule execution framework

libmaven-exec-plugin-java/resolute 3.1.0-2build1 all
  Exec Maven Plugin (transitional package)

libmaven-file-management-java/resolute 3.0.0-2build1 all
  Maven File Management API

libmaven-file-management-java-doc/resolute 3.0.0-2build1 all
  Documentation for Maven File Management API

libmaven-filtering-java/resolute 3.4.0-1build1 all
  Maven Filtering

libmaven-install-plugin-java/resolute 3.1.4-1build1 all
  Maven install plugin

libmaven-invoker-java/resolute 3.3.0-1build1 all
  Maven Invoker

libmaven-invoker-plugin-java/resolute 3.8.1-1build1 all
  Maven Invoker Plugin

libmaven-jar-plugin-java/resolute 3.3.0-2build1 all
  Maven Jar Plugin

libmaven-javadoc-plugin-java/resolute 3.10.1-2build1 all
  Maven Javadoc Plugin

libmaven-jaxb2-plugin-java/resolute 0.15.1-1build1 all
  Maven JAXB 2.x Plugin Project

libmaven-mapping-java/resolute 3.0.0-2build1 all
  Apache Maven Mapping

libmaven-parent-java/resolute 43-2build1 all
  Maven metadata for Apache Maven itself

libmaven-plugin-testing-java/resolute 3.3.0-2build1 all
  Maven Plugin Testing

libmaven-plugin-tools-java/resolute 3.10.2-2build1 all
  Maven Plugin Tools

libmaven-processor-plugin-java/resolute 5.1-1build1 all
  Maven plugin to process annotations for Java 6 at compile time

libmaven-remote-resources-plugin-java/resolute 3.0.0-1build1 all
  Apache Maven Remote Resources Plugin

libmaven-reporting-api-java/resolute 4.0.0-1build1 all
  Maven Reporting API

libmaven-reporting-exec-java/resolute 2.0.0-1build1 all
  Apache Maven Reporting Executor

libmaven-reporting-impl-java/resolute 4.0.0-1build1 all
  Maven Reporting API Implementation

libmaven-resolver-1.6-java/resolute 1.6.3-3build1 all
  Library to handle Java artifact repositories

libmaven-resolver-java/resolute 1.9.25-1 all
  Library to handle Java artifact repositories

libmaven-resolver-transport-http-1.6-java/resolute 1.6.3-3build1 all
  Library to handle Java artifact repositories (HTTP transport)

libmaven-resolver-transport-http-java/resolute 1.9.25-1 all
  Library to handle Java artifact repositories (HTTP transport)

libmaven-resources-plugin-java/resolute 3.3.1-1build1 all
  Maven resources plugin

libmaven-scm-java/resolute 1.13.0-1build1 all
  Maven SCM - Common API for SCM operations (Core API)

libmaven-scm-providers-java/resolute 1.13.0-1build1 all
  Maven SCM - Common API for SCM operations (Providers)

libmaven-script-interpreter-java/resolute 1.4-1build1 all
  Maven Script Interpreter

libmaven-shade-plugin-java/resolute 3.6.0-1build1 all
  Maven shade plugin

libmaven-shared-incremental-java/resolute 1.1-6build1 all
  Maven incremental build utilities

libmaven-shared-io-java/resolute 3.0.0-4build1 all
  Maven API for I/O support

libmaven-shared-jar-java/resolute 3.1.1-1build1 all
  Maven JAR Utilities

libmaven-shared-utils-java/resolute 3.4.2-1build1 all
  Replacement for plexus-utils in Maven

libmaven-site-plugin-java/resolute 3.21.0-1build1 all
  Maven Site Plugin for generating a site

libmaven-source-plugin-java/resolute 3.3.1-1build1 all
  Maven Source Plugin

libmaven-verifier-java/resolute 1.8.0-2build1 all
  Maven Verifier Component

libmaven-war-plugin-java/resolute 3.4.0-1build1 all
  Maven WAR Plugin

libmaven3-core-java/resolute 3.9.12-1 all
  Core libraries for Maven 3

libmavibot-java/resolute 1.0.0~M8-1build1 all
  Apache Mavibot - MVCC BTree Java Implementation

libmbassador-java/resolute 1.3.1-2 all
  feature-rich Java event bus optimized for high-throughput

libmckoisqldb-java/resolute 1.0.6-5build1 all
  Mckoi SQL Database (MckoiSQLDB)

libmdock-java/resolute 2.0.2-1 all
  lightweight Java component nesting and docking system

libmecab-java/resolute 0.996-15.1build4 all
  mecab binding for Java - java classes

libmecab-jni/resolute 0.996-15.1build4 amd64
  mecab binding for Java - native interface

libmetadata-extractor-java/resolute 2.11.0-1build1 all
  JPEG metadata extraction framework

libmetainf-services-java/resolute 1.11-1build1 all
  META-INF/services generator

libmetro-policy-java/resolute 2.7.2-4build1 all
  WS-Policy implementation in Java

libmicroba-java/resolute 1:0.4.4.3-6 all
  set of JFC (Swing) components

libmicroba-java-doc/resolute 1:0.4.4.3-6 all
  Documentation for libmicroba-java

libmiglayout-java/resolute 11.4.2+ds-2 all
  Java Layout Manager

libmilib-java/resolute 2.2.0+dfsg-1build1 all
  library for Next Generation Sequencing (NGS) data processing

libmime-util-java/resolute 2.1.3-4 all
  MIME types detector library

libmimepull-java/resolute 1.9.7-2build1 all
  Pull API for parsing MIME messages

libmina-sshd-java/resolute 2.13.2-3ubuntu1 all
  Java server and client implementation of the SSH protocol

libmina2-java/resolute 2.2.1-4 all
  Java network application framework

libminidns-java/resolute 1.0.0-3 all
  minimal DNS client library for Android and Java SE

libminlog-java/resolute 1.3.1-1 all
  minimal Java logging library

libmjson-java/resolute 1.4.0-4 all
  lean JSON Library for Java with a compact API

libmmtf-java/resolute 1.0.11-1build1 all
  Java API for macromolecular transmission format encoder/decoder

libmnemonicsetter-java/resolute 0.6-1 all
  Java library for automatically setting Swing mnemonics

libmockito-java/resolute 3.3.0-2build1 all
  mocking framework for Java

libmockobjects-java/resolute 0.09-7build1 all
  Framework for developing and using mock objects

libmockobjects-java-doc/resolute 0.09-7build1 all
  Framework for developing and using mock objects -- documentation

libmodello-java/resolute 1.11-2build1 all
  Data Model toolkit in use by the Maven 2 Project

libmodello-maven-plugin-java/resolute 1.11-1build1 all
  Modello Maven Plugin enables the use of Modello in Maven builds

libmojo-executor-java/resolute 2.4.1-1 all
  Maven Mojo Executor

libmondrian-java/resolute 1:3.11.0.1-5build1 all
  OLAP server written in Java

libmongodb-java/resolute 3.6.3-2.1 all
  MongoDB Java Driver

libmorfologik-stemming-java/resolute 1.9.0+dfsg-1.1 all
  Finite state automaton and stemming engine library

libmorfologik-stemming2-java/resolute 2.1.6-2build1 all
  Finite state automaton and stemming engine library

libmozjs-128-0/resolute 128.14.0-1 amd64
  SpiderMonkey JavaScript library

libmozjs-128-dev/resolute 128.14.0-1 amd64
  SpiderMonkey JavaScript library - development headers

libmozjs-140-0/resolute 140.8.0-4 amd64
  SpiderMonkey JavaScript library

libmozjs-140-dev/resolute 140.8.0-4 amd64
  SpiderMonkey JavaScript library - development headers

libmp3spi-java/resolute 1.9.5-2 all
  interface to support MP3 (MPEG 1/2/2.5 Layer 1/2/3) audio format

libmpj-java/resolute 0.44+dfsg-4build1 all
  Java library for parallel applications for multicore processors and clusters

libmqtt-client-java/resolute 1.16-1build1 all
  Java MQTT Client API

libmsgpack-java/resolute 0.9.6-1build1 all
  MessagePack for Java

libmsv-java/resolute 2009.1+dfsg1-6build1 all
  Sun multi-schema XML validator

libmtj-java/resolute 0.9.14+dfsg-7build1 all
  Java library for developing numerical applications

libmtj-java-doc/resolute 0.9.14+dfsg-7build1 all
  Java library for developing numerical applications (documentation)

libmujs-dev/resolute 1.3.8-2 amd64
  Lightweight JavaScript interpreter (development package)

libmujs3/resolute 1.3.8-2 amd64
  Lightweight JavaScript interpreter library

libmultiverse-core-java/resolute 0.7.0-6build1 all
  Java library implementing Software Transactional Memory (STM)

libmunge-maven-plugin-java/resolute 1.0-3build1 all
  Maven plugin to pre-process Java code

libmustache-java/resolute 0.9.1-1build1 all
  Mustache implementation in Java

libmvel-java/resolute 2.5.2-1 all
  expression language for Java-based applications - Library

libnaga-java/resolute 3.0+svn80-5build1 all
  Simplified Java NIO asynchronous sockets

libnanoxml2-java/resolute 2.2.3.dfsg-9 all
  Small XML parser for Java

libnanoxml2-java-doc/resolute 2.2.3.dfsg-9 all
  documentation for libnanoxml2-java

libnarcissus-java/resolute 1.0.11+ds-1 all
  limited Java reflection library that bypasses security

libnarcissus-jni/resolute 1.0.11+ds-1 amd64
  limited Java reflection library that bypasses security

libnative-platform-java/resolute 0.14-6build1 all
  Java bindings for various native APIs

libnative-platform-java-doc/resolute 0.14-6build1 all
  testing and specification framework for Java and Groovy - Docs

libnative-platform-jni/resolute 0.14-6build1 amd64
  Java bindings for various native APIs - JNI library

libnb-absolutelayout-java/resolute 12.1-3build1 all
  Java LayoutManager to allow placement in absolute positions

libnb-javaparser-java/resolute 9+2018-2 all
  Parser for the Java language which is good for use in tools

libnb-org-openide-modules-java/resolute 19~us1-0ubuntu1 all
  Utility classes for modules from the NetBeans Platform

libnb-org-openide-util-java/resolute 19~us1-0ubuntu1 all
  Utility classes from the NetBeans Platform

libnb-org-openide-util-lookup-java/resolute 19~us1-0ubuntu1 all
  Utility lookup classes from the NetBeans Platform

libnb-platform-devel-java/resolute 19~us1-0ubuntu1 all
  Build harness for NetBeans Platform

libnb-platform18-java/resolute 19~us1-0ubuntu1 all
  NetBeans Platform for building rich desktop applications in Java

libnekohtml-java/resolute 1.9.22.noko2-1 all
  NekoHTML - HTML parser for Java

libnekohtml-java-doc/resolute 1.9.22.noko2-1 all
  NekoHTML - HTML parser for Java (Documentation)

libnet-luminis-build-plugin-java/resolute 0.2.0-8build1 all
  Wrapper around Bnd to allow easy bundle creation from ant builds.

libnetlib-java/resolute 0.9.3-7build1 all
  collection of mission-critical software components for linear algebra systems

libnetty-buffer-java/resolute 1:4.1.48-16 all
  Java NIO client/server socket framework

libnetty-common-java/resolute 1:4.1.48-16 all
  Java NIO client/server socket framework

libnetty-java/resolute 1:4.1.48-16 all
  Java NIO client/server socket framework

libnetty-reactive-streams-java/resolute 2.0.8-1build1 all
  Netty Reactive Streams

libnetty-tcnative-java/resolute 2.0.28-1build5 all
  Tomcat native fork for Netty

libnetx-java/resolute 0.5-4build1 all
  An open-source JNLP client

libnexus-java/resolute 4.4.3-10 all
  NeXus scientific data file format - java libraries

libnginx-mod-http-js/resolute 0.9.4-1build2 amd64
  JavaScript HTTP module for Nginx

libnginx-mod-stream-js/resolute 0.9.4-1build2 amd64
  JavaScript Stream module for Nginx

libngs-java/resolute 3.2.1+dfsg-6ubuntu1 amd64
  Next Generation Sequencing language Bindings (Java bindings)

libngs-java-doc/resolute 3.2.1+dfsg-6ubuntu1 all
  Next Generation Sequencing language Bindings (Java documentation)

libngs-jni/resolute 3.2.1+dfsg-6ubuntu1 amd64
  Next Generation Sequencing language Bindings (Java native binding)

libnist-sip-aosp-java/resolute 9.0.0+r35-1.1ubuntu2 all
  Parser and Stack API

libnode-dev/resolute 22.22.1+dfsg+~cs22.19.15-1ubuntu1 amd64
  evented I/O for V8 javascript (development files)

libnode127/resolute 22.22.1+dfsg+~cs22.19.15-1ubuntu1 amd64
  evented I/O for V8 javascript - runtime library

libnoggit-java/resolute 0.8-1build1 all
  Fast streaming JSON parser for Java

libnumbertext-java/resolute 1.0.11-4build2 all
  Number to number name and money text conversion library for Java

libnumericalchameleon-java/resolute 3.0.0+ds-2build1 all
  Spoken and written numbers

liboauth-signpost-java/resolute 1.2.1.2-3build1 all
  simple OAuth message signing for Java

libobantoo-java/resolute 2.1.12+ds1-4build1 all
  OBanToo is a Java library with banking tools

libobject-cloner-java/resolute 0.2~git95dba2c-3 all
  Java Object cloning library with extensible strategies

libobjenesis-java/resolute 3.5-1 all
  Java library to instantiate a new object of a particular class

libodfdom-java/resolute 0.9.0~RC2-2 all
  OpenDocument Format (ODF) framework

libofficebean-java/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 amd64
  generic Java Bean wrapper for LibreOffice components

libognl-java/resolute 2.7.3-9 all
  Java expression language

libognl-java-doc/resolute 2.7.3-9 all
  Java expression language - Documentation

libojalgo-java/resolute 56.2.1+ds-1 all
  Java library to do mathematics, linear algebra and optimisation

libokhttp-java/resolute 3.13.1-4 all
  HTTP+HTTP/2 client for Android and Java applications

libokhttp-signpost-java/resolute 1.1.0-2 all
  Signpost extension for signing OkHttp requests

libokio-java/resolute 1.16.0-2build1 all
  Modern I/O API for Java

libokio-java-doc/resolute 1.16.0-2build1 all
  Modern I/O API for Java - Documentations

libolap4j-java/resolute 1.3.0+dfsg-2 all
  unified Java API to access an OLAP server

libolap4j-java-doc/resolute 1.3.0+dfsg-2 all
  unified Java API to access an OLAP server - documentation

libonemind-commons-invoke-java/resolute 1.1.0+cvs20090227-6 all
  Java invocation framework library

libonemind-commons-java-java/resolute 1.5.5-7 all
  common java library used to support other developments

libopencensus-java/resolute 0.26.0+ds-1build1 all
  stats collection and distributed tracing framework

libopenchemlib-java/resolute 2026.2.2+ds-1 all
  framework providing cheminformatics core functionality

libopencsv-java/resolute 5.2-1build1 all
  opencsv - Library for reading and writing CSV in Java

libopencv-java/resolute 4.10.0+dfsg-7ubuntu5 amd64
  Java bindings for the computer vision library

libopencv410-jni/resolute 4.10.0+dfsg-7ubuntu5 amd64
  Java jni library for the computer vision library

libopenhft-affinity-java/resolute 3.23.3-1build1 all
  OpenHFT Java Thread Affinity library

libopenhft-chronicle-bytes-java/resolute 1.1.15-3build1 all
  OpenHFT byte buffer library

libopenhft-chronicle-core-java/resolute 2.17.5-v1.1.8-3build1 all
  OpenHFT core library

libopenhft-chronicle-network-java/resolute 1.0.58-2build1 all
  OpenHFT High Performance Network library

libopenhft-chronicle-queue-java/resolute 3.6.0-3build1 all
  Java library for persisted low latency messaging

libopenhft-chronicle-threads-java/resolute 1.1.6-4build1 all
  OpenHFT thread pool library

libopenhft-chronicle-wire-java/resolute 1.1.13-3 all
  Wire format abstraction library

libopenhft-compiler-java/resolute 2.2.4-2build1 all
  Java Runtime Compiler library

libopenhft-lang-java/resolute 6.7.6-2build1 all
  High Performance Java library for High Frequency Trading

libopenid4java-java/resolute 1.0.0-2build1 all
  This library allows you to OpenID-enable your Java webapp

libopenjfx-java/resolute 11.0.11+1-7build1 all
  JavaFX/OpenJFX - Rich client application platform for Java (Java libraries)

libopenjfx-java-doc/resolute 11.0.11+1-7build1 all
  JavaFX/OpenJFX - Rich client application platform for Java (Javadoc)

libopenjfx-jni/resolute 11.0.11+1-7build1 amd64
  JavaFX/OpenJFX - Rich client application platform for Java (native libraries)

libopenjpa-java/resolute 2.4.2-9build1 all
  Java Persistence 2.0 API (JPA) implementation library

libopenjpip-viewer/resolute-updates,resolute-security 2.5.4-1ubuntu0.1 all
  JPEG 2000 java based viewer for advanced remote JPIP access

libopenjson-java/resolute 1.0.13-1build1 all
  rewrite of the evil licensed json.org

libopenni-java/resolute 1.5.4.0+dfsg-8build1 amd64
  Java framework for sensor-based 'Natural Interaction'

libopennlp-maxent-java/resolute 3.0.0+ds-2build1 all
  OpenNLP Maximum Entropy Package

libopenrefine-arithcode-java/resolute 1.2-2build1 all
  Java implementation of arithmetic coding and PPM compression

libopenrefine-butterfly-java/resolute 1.2.6-1build1 all
  modular web application framework

libopenrefine-opencsv-java/resolute 2.4-2build1 all
  CSV parser library for Java

libopenrefine-vicino-java/resolute 1.2-3build1 all
  near-neighbor search tool for Java

libopentest4j-java/resolute 1.2.0-4build1 all
  Open Test Alliance API

libopentest4j-reporting-java/resolute 0.2.5-0ubuntu1 all
  Open Test Reporting

libopsin-java/resolute 2.8.0-3build1 all
  Chemical name to structure converter

liboptions-java/resolute 0.0.20120113-3build1 all
  command line option parsing library for Java

liboptions-java-doc/resolute 0.0.20120113-3build1 all
  command line option parsing library for Java (documentation)

liboro-java/resolute 2.0.8a-15 all
  Regular expression library for Java

liboro-java-doc/resolute 2.0.8a-15 all
  Regular expression library for Java -- documentation

liborson-charts-java/resolute 2.1.0-3build1 all
  Java library generating 3D charts

liborson-charts-java-doc/resolute 2.1.0-3build1 all
  Java library generating 3D charts (doc)

liboscache-java/resolute 2.4.1+ds1-8build1 all
  caching solution for java server pages (JSP)

liboscar4-java/resolute 5.3.0+dfsg-1 all
  automated annotation of chemistry in scientific articles

libosgi-annotation-java/resolute 8.1.0-1build1 all
  Java OSGi API - annotation module

libosgi-annotation-java-doc/resolute 8.1.0-1build1 all
  Javadoc for Java OSGi API - annotation module

libosgi-compendium-java/resolute 7.0.0-1build1 all
  Java OSGi API - Compendium module

libosgi-compendium-java-doc/resolute 7.0.0-1build1 all
  Javadoc for Java OSGi API - Compendium module

libosgi-core-java/resolute 8.0.0-2build1 all
  Java OSGi API - Core module

libosgi-core-java-doc/resolute 8.0.0-2build1 all
  Javadoc for Java OSGi API - Core module

libosgi-foundation-ee-java/resolute 4.2.0-5build1 all
  Java OSGi API - Foundation Execution Environment

libosmpbf-java/resolute 1.6.1-4 all
  Java access library for OpenStreetMap PBF file format

libowasp-antisamy-java/resolute 1.7.4-1 all
  OWASP AntiSamy

libowasp-encoder-java/resolute 1.2.3-2 all
  OWASP Java Encoder Project

libowasp-esapi-java/resolute 2.4.0.0-2.1 all
  Enterprise Security API (ESAPI)

libowasp-java-html-sanitizer-java/resolute 20191001.1-1build1 all
  OWASP Java HTML Sanitizer

libowlapi-java/resolute 5.1.20-1build1 all
  Java API for creating, manipulating and serialising OWL Ontologies

libpal-java/resolute 1.5.1+dfsg-9 all
  Phylogenetic Analysis Library

libpal-java-doc/resolute 1.5.1+dfsg-9 all
  Phylogenetic Analysis Library - documentation

libpaperclips-java/resolute 1.0.4-3build1 all
  Simplified Java Printing Support for SWT

libpaperclips-java-doc/resolute 1.0.4-3build1 all
  Documentation for libpaperclips-java

libparanamer-java/resolute 2.8-6 all
  Java library to access method parameter names at runtime

libparanamer-java-doc/resolute 2.8-6 all
  Java library to access method parameter names at runtime -- docs

libparanamer-maven-plugin-java/resolute 2.8-6 all
  Paranamer Maven Plugin

libparboiled-java/resolute 1.4.1-1 all
  Parser library based on Parsing Expression Grammars (PEGs)

libparsington-java/resolute 3.1.0-1 all
  mathematical expression parser for Java

libparsington-java-doc/resolute 3.1.0-1 all
  documentation for parsington

libpdfbox-graphics2d-java/resolute 0.43-3 all
  Java library to embed graphics as vector drawing in a PDF

libpdfbox-java/resolute 1:1.8.16-5 all
  PDF library for Java

libpdfbox2-java/resolute 2.0.29-1 all
  PDF library for Java

libpdfrenderer-java/resolute 0.9.0-2.1 all
  Java PDF renderer and viewer

libpegdown-java/resolute 1.6.0-2build1 all
  Lightweight Markdown processing library

libpentaho-reporting-flow-engine-java/resolute 0.9.4-6build1 all
  report library for java

libpentaho-reporting-flow-engine-java-doc/resolute 0.9.4-6build1 all
  report library for java documentation

libperfmark-java/resolute 0.21.0+ds-3build1 all
  High Performance Tracing Library for Java

libpf4j-java/resolute 3.13.0+dfsg-2 all
  framework to turn monolithic Java applications into modular ones

libpf4j-update-java/resolute 2.3.0+dfsg-6 all
  update mechanism for Java modular applications

libphonenumber8-java/resolute 8.13.51+ds-5 all
  parsing/formatting/validating phone numbers - java

libpicard-java/resolute 3.4.0+dfsg-1 all
  Java library to manipulate SAM and BAM files

libpicard-java-doc/resolute 3.4.0+dfsg-1 all
  Documentation for the java picard library

libpiccolo-java/resolute 1.2-2 all
  toolkit for development of 2D structured graphics

libpicocli-java/resolute 4.6.2-2build1 all
  Tiny command line interpreter library for Java applications

libpicocontainer-java/resolute 2.15+repack-4 all
  Java library implementing the Dependency Injection pattern

libpicocontainer-java-doc/resolute 2.15+repack-3ubuntu1 all
  Java library implementing the Dependency Injection pattern -- docs

libpicocontainer1-java/resolute 1.3-4 all
  Java library implementing the Dependency Injection pattern

libpixelmed-codec-java/resolute 20200328-6build1 all
  JPEG selective block redaction codec for pixelmed

libpixelmed-imageio-java/resolute 20200328-6build1 all
  JPEG lossless decoder for pixelmed

libpixelmed-java/resolute 20251203+dfsg-2 all
  DICOM implementation containing Image Viewer and a ECG Viewer

libpixels-java/resolute 2.1.3+svn.42-3 all
  manipulation and filtering of images in Java

libpixie-java/resolute 1:1.1.6-5 all
  Java Vector Format Viewer Library

libpj-java/resolute 0.0~20150107+dfsg-5 all
  API and middleware for parallel programming in Java

libplexus-ant-factory-java/resolute 1.0~alpha2.1-5build1 all
  Plexus Ant Factory

libplexus-archiver-java/resolute 4.6.1-1build1 all
  Archiver plugin for the Plexus compiler system

libplexus-bsh-factory-java/resolute 1.0~alpha7-5build1 all
  Plexus Beanshell Factory

libplexus-build-api-java/resolute 0.0.7-4build1 all
  Incremental build API for Plexus components

libplexus-cipher-java/resolute 2.0-1build1 all
  Plexus Cipher Component used by Maven

libplexus-classworlds-java/resolute 2.7.0-1build1 all
  Class loading utilities for the Plexus framework

libplexus-classworlds2-java/resolute 2.7.0-1build1 all
  Class loading utilities for the Plexus framework (transitional package)

libplexus-cli-java/resolute 1.2-8build1 all
  Easily create CLIs with Plexus components

libplexus-cli-java-doc/resolute 1.2-8build1 all
  Documentation for Plexus CLI

libplexus-compiler-java/resolute 2.13.0-1build1 all
  Plexus compiler system

libplexus-component-annotations-java/resolute 2.1.1-1build1 all
  Plexus Component Annotations

libplexus-component-metadata-java/resolute 2.1.1-1build1 all
  Component Metadata Maven plugin for Plexus

libplexus-container-default-java/resolute 2.1.1-1build1 all
  Plexus Inversion-of-control Container

libplexus-container-default1.5-java/resolute 2.1.1-1build1 all
  Plexus Inversion-of-control Container (transitional package)

libplexus-digest-java/resolute 1.1-7build1 all
  Digest utilities for the Plexus system

libplexus-i18n-java/resolute 1.0-beta-10-6build1 all
  Internationalization support for Plexus applications

libplexus-interactivity-api-java/resolute 1.4-1 all
  interactivity API for the Plexus framework

libplexus-interpolation-java/resolute 1.27-1build1 all
  Plexus Interpolation API

libplexus-io-java/resolute 3.3.1-2build1 all
  Plexus IO Components

libplexus-languages-java/resolute 1.1.1-3 all
  Plexus shared language features

libplexus-resources-java/resolute 1.3.0+really1.1.0-1 all
  Plexus Resource Component

libplexus-sec-dispatcher-java/resolute 2.0-3build1 all
  Plexus Security Dispatcher Component used by Maven

libplexus-testing-java/resolute 1.1.0-1.1build1 all
  Plexus Testing

libplexus-utils2-java/resolute 3.4.2-1build1 all
  utilities for the Plexus framework

libplexus-utils2-java-doc/resolute 3.4.2-1build1 all
  utilities for the Plexus framework - documentation

libplexus-velocity-java/resolute 1.2-4build1 all
  Plexus component interface to velocity

libplexus-xml-java/resolute 3.0.1-2build1 all
  Plexus XML Utilities

libplplot-java/resolute 5.15.0+dfsg3-2build3 amd64
  Scientific plotting library (Java bindings)

libplume-hashmap-util-java/resolute 0.0.1+ds-1build1 all
  Plume-lib utility libraries for Java HashMaps

libplume-reflection-util-java/resolute 0.2.2+ds-1build1 all
  Utility libraries related to Java reflection

libplume-util-java/resolute 1.1.0+ds-1build1 all
  Plume-lib utility libraries for Java

libpng-sixlegs-java/resolute 2.0-3build1 all
  Sixlegs Java PNG Decoder

libpng-sixlegs-java-doc/resolute 2.0-3build1 all
  Documentation for Sixlegs Java PNG Decoder

libpolyglot-maven-java/resolute 0.8~tobrien+git20120905-10build1 all
  modules to enable Maven usage in others JVM languages

libpolyglot-maven-java-doc/resolute 0.8~tobrien+git20120905-10build1 all
  modules to enable Maven usage in others JVM languages - docs

libportlet-api-2.0-spec-java/resolute 1.0-3build1 all
  Java Portlet Specification V2.0

libpostgis-java/resolute 1:2025.1.0-1 all
  Geographic objects support for PostgreSQL -- JDBC support

libpostgresql-jdbc-java/resolute 42.7.10-1 all
  Java database (JDBC) driver for PostgreSQL

libpracticalxml-java/resolute 1.1.19-2build1 all
  practical XML handling routines

libprecis-java/resolute 1.1.0-2build1 all
  Java implementation of the PRECIS Framework

libprocessing-core-java/resolute 1.2.1-3build1 all
  Java animation and interaction library

libprocyon-java/resolute 0.6.0-3ubuntu1 all
  Procyon Framework

libproguard-core-java/resolute 7.0.1-2build1 all
  Library to read, analyze, modify, and write Java class files

libproguard-java/resolute 6.2.2-3build1 all
  Java class file shrinker, optimizer, and obfuscator (Library)

libproperties-maven-plugin-java/resolute 1.1.0-1build1 all
  Maven Plugin to read and write property files from mojo.codehaus.org

libprotobuf-java/resolute 3.21.12-15ubuntu1 all
  Java bindings for protocol buffers

libprotobuf-java-format-java/resolute 1.3-2build1 all
  Library to serialize protobuf messages to XML, JSON and HTML

libprotobuf2-java/resolute 2.6.1-4build1 all
  Java bindings for protocol buffers

libproxool-java/resolute 0.9.1-12 all
  Java JDBC connection pool

libproxy-vole-java/resolute 1.0.3-3build1 all
  Proxy Vole

libpsych-java/resolute 5.3.1-1 all
  ruby-psych Java extension

libpulse-java/resolute 2.4.7-2build2 all
  PulseAudio sound driver for Java

libpulse-jni/resolute 2.4.7-2build2 amd64
  PulseAudio sound driver for Java (JNI libraries)

libpuppetlabs-http-client-clojure/resolute 2.1.1-2build1 all
  Clojure wrapper around libhttpasyncclient-java

libqdbm-java/resolute 1.8.78-15 amd64
  QDBM Database Libraries for Java

libqdox-java/resolute 1.12.1-4build1 all
  Quickly parses declarations and Javadoc from Java source

libqdox2-java/resolute 2.0.3-1build1 all
  quickly parses declarations and Javadoc from Java source

libqdwizard-java/resolute 5.0.1-2build1 all
  simple Java Wizard API

libqpid-proton-j-extensions-java/resolute 1.2.5-1.1 all
  Websocket extension of Qpid Proton-J

libqrcodegen-java/resolute 1.8.0-1.2build2 all
  QR Code generator library in multiple languages - Java version

libquartz-java/resolute 1:1.8.6-8ubuntu1 all
  open source job scheduling system

libquartz2-java/resolute 2.3.2-4 all
  open source job scheduling system

libquickjs/resolute 2025.04.26-1build1 amd64
  small and embeddable Javascript engine library

librabbitmq-client-java/resolute 5.0.0-2 all
  RabbitMQ Java client

librappor-aosp-java/resolute 9.0.0+r35-1.1build1 all
  Rappor java client library

librdf4j-java/resolute 3.7.7+ds-1build1 all
  extensible framework for RDF and RDF Schema data

librdfa-java/resolute 1.0.0~BETA1-3 all
  SAX-based Java RDFa parser

librdp-taxonomy-tree-java/resolute 1.2.0-6 all
  taxonomy tree library from Ribosomal Database Project (RDP)

libre2j-java/resolute 1.7+dfsg-1build1 all
  RE2/J: linear time regular expression matching in Java

libreactive-streams-java/resolute 1.0.3-1build1 all
  Standard for asynchronous stream processing with non-blocking backpressure

libreactor-core-java/resolute 2.0.8-2 all
  Reactive Streams Specification Implementation

libreadline-java/resolute 0.8.0.1+dfsg-10build4 amd64
  GNU readline and BSD editline wrappers for Java

libredberry-pipe-java/resolute 1.0.0~alpha0-4 all
  implementation of concurrent pipelines

libreflectasm-java/resolute 1.11.9+dfsg-4 all
  library that provides reflection by using code generation

libreflectasm-java-doc/resolute 1.11.9+dfsg-4 all
  library that provides reflection by using code generation - doc

libreflections-java/resolute 0.10.2+dfsg-3 all
  Java runtime metadata analysis library

libregexp-java/resolute 1.5+dfsg-1 all
  Regular expression library for Java

libregexp-java-doc/resolute 1.5+dfsg-1 all
  Documentation for the Regular expression library

librelaxng-datatype-java/resolute 1.0+ds1-4 all
  Java datatype interface for RELAX NG

librelaxngcc-java/resolute 1.12-2 all
  RELAX NG Compiler Compiler

librelaxngcc-java-doc/resolute 1.12-2 all
  RELAX NG Compiler Compiler -- documentation

libreoffice-java-common/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  office productivity suite -- arch-independent Java support files

libreoffice-officebean/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 amd64
  transitional package for libofficebean-java

libreoffice-script-provider-js/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  JavaScript script support provider for LibreOffice scripting framework

libreoffice-subsequentcheckbase/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  LibreOffice java test libraries

libreplacer-java/resolute 1.5.3-3build1 all
  Maven plugin to replace tokens in a given file with a value

librepository-java/resolute 1.1.6-4build1 all
  abstraction library for accessing hierachic bulk content

librepository-java-doc/resolute 1.1.6-4build1 all
  abstraction library for accessing hierachic bulk content -- documentation

libresteasy-java/resolute 3.6.2-4 all
  RESTEasy -- Framework for RESTful Web services and Java applications

libresteasy3.0-java/resolute 3.0.26-6 all
  RESTEasy 3.0 -- Framework for RESTful Web services and Java applications

librhino-java/resolute 1.7.15-1build1 all
  Libraries for rhino Java Script Engine

libridl-java/resolute-updates,resolute-security 4:26.2.4.2-0ubuntu0.26.04.2 all
  transitional package for LibreOffice UNO runtime environment

librngom-java/resolute 2.3.0.1-11build1 all
  Java library for parsing RELAX NG grammars

librome-java/resolute 1.12.2-1build1 all
  Java library to handle Atom and RSS feeds

librsyntaxtextarea-java/resolute 2.5.8-2build1 all
  Java library for syntax highlighting text component

librust-gloo-timers-dev/resolute 0.3.0-1 amd64
  Convenience crate for working with JavaScript timers - Rust source code

librust-js-int-dev/resolute 0.2.2-1 amd64
  JavaScript-interoperable integer types - Rust source code

librust-moka-dev/resolute 0.12.11-1 amd64
  Fast and concurrent cache library inspired by Java Caffeine - Rust source code

librust-symbolic-common-dev/resolute 12.8.0-1 amd64
  Common types and utilities for symbolic, a library to symbolicate and process stack traces from native applications, m
inidumps or minified JavaScript - Rust source code

librust-timsort-dev/resolute 0.1.2-1 amd64
  The modified MergeSort used in Python and Java - Rust source code

librust-wasm-bindgen-futures-dev/resolute 0.4.58-1 amd64
  Bridging the gap between Rust Futures and JavaScript Promises - Rust source code

librx-java/resolute 3.1.5-1build1 all
  Reactive Extensions for the JVM

librxtx-java/resolute 2.2.0+dfsg-2ubuntu2 amd64
  Full Java CommAPI implementation

libs2-geometry-library-java/resolute 1.0.1-3build1 all
  Java library for spherical math

libsaaj-java/resolute 1.4.0-4ubuntu1 all
  SOAP with Attachment API for Java

libsaaj-ri-java/resolute 1.4.1-1.1build1 all
  SOAP with Attachments API for Java - Reference Implementation

libsac-java/resolute 1.3+dfsg-6build1 all
  Simple API for CSS Java library

libsalvation-java/resolute 2.7.2-1 all
  salvation - Content Security Policy (CSP) parser

libsambox-java/resolute 2.4.24-1 all
  SAMBox PDF processor

libsaxon-java/resolute 1:6.5.5-13 all
  Saxon XSLT Processor

libsaxonb-java/resolute 9.1.0.8+dfsg-4 all
  Saxon-B XSLT Processor

libsaxonb-java-doc/resolute 9.1.0.8+dfsg-4 all
  Saxon-B XSLT Processor's documentation and javadoc

libsaxonhe-java/resolute 9.9.1.5+dfsg-1build1 all
  Saxon-HE is the XSLT and XQuery Processor

libsbml5-java/resolute 5.20.5+dfsg-3 amd64
  System Biology Markup Language library - Java bindings

libsbt-launcher-interface-java/resolute 1.0.1-2build1 all
  Sbt launcher module

libsbt-serialization-java/resolute 0.1.2+repack-1build1 all
  Serialization facility for sbt

libsbt-template-resolver-java/resolute 0.1+repack-1build1 all
  Sbt template resolver

libsbt-test-interface-java/resolute 1.0+repack-1build1 all
  Sbt test interface

libscala-pickling-java/resolute 0.10.1+repack-2build1 all
  Fast, customizable, boilerplate-free pickling support for Scala

libscala-tools-sbinary-java/resolute 0.4.2-on-scala-2.11.0~M5-1build1 all
  Scala library for describing binary protocols

libscannotation-java/resolute 1.0.2+svn20110812-4 all
  Java annotation scanner

libscopt-java/resolute 3.5.0+repack-1build1 all
  Simple scala command line options parsing

libscram-java/resolute 3.2-1 all
  Salted Challenge Response Authentication Mechanism

libsdo-api-java/resolute 1.1.1-2build1 all
  Service Data Objects 2.1 Java API spec

libsdo-api-java-doc/resolute 1.1.1-2build1 all
  Documentation for libsdo-api-java

libsdp-api-java/resolute 1.0-2build1 all
  SDP API for Java

libsecondstring-java/resolute 0.1~dfsg-2 all
  approximate string-matching routines

libsegment-java/resolute 1.4.2-2build1 all
  Rule based text splitting library

libsejda-commons-java/resolute 1.1.7-1 all
  common classes for PDFsam and Sejda

libsejda-eventstudio-java/resolute 3.0.4-1 all
  pure Java event bus implementation

libsejda-injector-java/resolute 2.0.0-1 all
  lightweight dependency injection engine

libsejda-io-java/resolute 2.1.4-1 all
  layer of Input/Output classes built on top of Java IO and NIO

libsejda-java/resolute 4.3.14-1 all
  extendible PDF manipulation layer library written in Java

libsemantic-version-java/resolute 2.1.1+ds-2 all
  single-class semantic version implementation for java

libsemver-java/resolute 0.10.2-2build1 all
  Java implementation of the SemVer Specification

libsequence-library-java/resolute 1.0.4+dfsg-1 all
  Textual Diff and Merge Library

libserializer-java/resolute 1.1.6-6build1 all
  general serializaton framework

libserp-java/resolute 1.15.1-2build1 all
  Java Virtual Machine bytecode manipulation framework

libserp-java-doc/resolute 1.15.1-2build1 all
  Documentation for libserp-java

libservice-wrapper-doc/resolute 3.5.51-2build2 all
  Jar daemon wrapper (javadoc files)

libservice-wrapper-java/resolute 3.5.51-2build2 all
  Jar daemon wrapper java libraries

libservlet-api-java/resolute 4.0.1-2build1 all
  Java Servlet API

libservlet-api-java-doc/resolute 4.0.1-2build1 all
  Java Servlet API (documentation)

libservlet3.1-java/resolute 1:4.0.1-2build1 all
  Java Servlet API 3.1 (transitional package)

libshimdandy-java/resolute 1.2.1-1.1build2 all
  Shim wrapping multiple Clojure runtimes into the same JVM

libshiro-java/resolute 1.3.2-6ubuntu2 all
  Apache Shiro - Java Security Framework

libsignatures-java/resolute 1.1.10.g614270e+ds-1 all
  graph signature library for molecules

libsimple-http-java/resolute 4.1.21-2fakesync1 all
  high-performance, embeddable Java HTTP engine

libsimple-http-java-doc/resolute 4.1.21-2fakesync1 all
  Documentation for libsimple-http-java

libsimple-validation-java/resolute 0.9-3 all
  library for quickly adding validation code to Swing user-interfaces

libsimple-xml-java/resolute 2.7.1-4build1 all
  XML serialization and configuration framework for Java

libsip-api-java/resolute 1.2-2build1 all
  SIP API for Java

libsis-base-java/resolute 18.09~pre1+git20180928.45fbd31+dfsg-4build1 all
  Base libraries used by software from the SIS division at ETH Zurich

libsisu-inject-java/resolute 0.3.5-1build1 all
  Dependency Injection container for Java

root@6053d4063ea4:/# exit
exit
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it openjdk:21 /bin/bash
Unable to find image 'openjdk:21' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:21": docker.io/library/openjdk:21: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it openjdk:20 /bin/bash
Unable to find image 'openjdk:20' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:20": docker.io/library/openjdk:20: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it openjdk:19 /bin/bash
Unable to find image 'openjdk:19' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:19": docker.io/library/openjdk:19: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it openjdk:18 /bin/bash
Unable to find image 'openjdk:18' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:18": docker.io/library/openjdk:18: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it openjdk:17 /bin/bash
Unable to find image 'openjdk:17' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:17": docker.io/library/openjdk:17: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -it openjdk:17 bash
Unable to find image 'openjdk:17' locally
docker: Error response from daemon: failed to resolve reference "docker.io/library/openjdk:17": docker.io/library/openjdk:17: not found

Run 'docker run --help' for more information
PS C:\Users\kunren> docker run -v ./java:/tmp/java -it ubuntu /bin/bash
root@bd3da9e98774:/# apt update; autp -y upgrade; apt -y install openjdk-21-jdk
Get:1 http://security.ubuntu.com/ubuntu resolute-security InRelease [137 kB]
Get:2 http://archive.ubuntu.com/ubuntu resolute InRelease [136 kB]
Get:3 http://security.ubuntu.com/ubuntu resolute-security/restricted amd64 Packages [315 kB]
Get:4 http://archive.ubuntu.com/ubuntu resolute-updates InRelease [137 kB]
Get:5 http://security.ubuntu.com/ubuntu resolute-security/main amd64 Packages [383 kB]
Get:6 http://archive.ubuntu.com/ubuntu resolute-backports InRelease [136 kB]
Get:7 http://security.ubuntu.com/ubuntu resolute-security/universe amd64 Packages [173 kB]
Get:8 http://archive.ubuntu.com/ubuntu resolute/multiverse amd64 Packages [352 kB]
Get:9 http://archive.ubuntu.com/ubuntu resolute/main amd64 Packages [1874 kB]
Get:10 http://archive.ubuntu.com/ubuntu resolute/restricted amd64 Packages [189 kB]
Get:11 http://archive.ubuntu.com/ubuntu resolute/universe amd64 Packages [20.1 MB]
Get:12 http://archive.ubuntu.com/ubuntu resolute-updates/universe amd64 Packages [263 kB]
Get:13 http://archive.ubuntu.com/ubuntu resolute-updates/restricted amd64 Packages [327 kB]
Get:14 http://archive.ubuntu.com/ubuntu resolute-updates/multiverse amd64 Packages [3584 B]
Get:15 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 Packages [453 kB]
Fetched 25.0 MB in 8s (2960 kB/s)
1 package can be upgraded. Run 'apt list --upgradable' to see it.
bash: autp: command not found
Installing:
  openjdk-21-jdk

Installing dependencies:
  adwaita-icon-theme         libdisplay-info3         libp11-kit0            libxi6
  alsa-topology-conf         libdrm-amdgpu1           libpam-systemd         libxinerama1
  alsa-ucm-conf              libdrm-common            libpango-1.0-0         libxkbcommon0
  at-spi2-common             libdrm-intel1            libpangocairo-1.0-0    libxkbfile1
  at-spi2-core               libdrm2                  libpangoft2-1.0-0      libxml2-16
  bubblewrap                 libedit2                 libpciaccess0          libxmu6
  ca-certificates            libelf1t64               libpcsclite1           libxmuu1
  ca-certificates-java       libepoxy0                libpixman-1-0          libxpm4
  dbus                       libexpat1                libpng16-16t64         libxrandr2
  dbus-bin                   libffi8                  libpython3-stdlib      libxrender1
  dbus-daemon                libfontconfig1           libpython3.14-minimal  libxres1
  dbus-session-bus-common    libfreetype6             libpython3.14-stdlib   libxshmfence1
  dbus-system-bus-common     libfribidi0              libreadline8t64        libxt-dev
  dbus-user-session          libgbm1                  librsvg2-2             libxt6t64
  dconf-gsettings-backend    libgdk-pixbuf-2.0-0      librsvg2-common        libxtst6
  dconf-service              libgdk-pixbuf2.0-common  libsensors-config      libxv1
  dmsetup                    libgif7                  libsensors5            libxxf86dga1
  fontconfig                 libgl1                   libsharpyuv0           libxxf86vm1
  fontconfig-config          libgl1-mesa-dri          libsm-dev              linux-libc-dev
  fonts-dejavu-core          libglib2.0-0t64          libsm6                 linux-sysctl-defaults
  fonts-dejavu-extra         libglib2.0-data          libsqlite3-0           luit
  fonts-dejavu-mono          libglvnd0                libsystemd-shared      manpages
  glycin-loaders             libglx-mesa0             libtasn1-6             manpages-dev
  glycin-thumbnailers        libglx0                  libthai-data           media-types
  gsettings-desktop-schemas  libglycin-2-0            libthai0               mesa-libgallium
  gtk-update-icon-cache      libgnutls30t64           libunistring5          mesa-vulkan-drivers
  hicolor-icon-theme         libgraphite2-3           libvulkan1             netbase
  ibus-gtk3                  libgssapi-krb5-2         libwayland-client0     openjdk-21-jdk-headless
  java-common                libgtk-3-0t64            libwayland-cursor0     openjdk-21-jre
  krb5-locales               libgtk-3-bin             libwayland-egl1        openjdk-21-jre-headless
  libaom3                    libgtk-3-common          libx11-6               openssl
  libapparmor1               libharfbuzz0b            libx11-data            python3
  libasound2-data            libheif-plugin-aomdec    libx11-dev             python3-minimal
  libasound2t64              libheif-plugin-aomenc    libx11-xcb1            python3.14
  libatk-bridge2.0-0t64      libheif1                 libxau-dev             python3.14-minimal
  libatk-wrapper-java        libhogweed6t64           libxau6                readline-common
  libatk-wrapper-java-jni    libhwy1t64               libxaw7                rpcsvc-proto
  libatk1.0-0t64             libibus-1.0-5            libxcb-dri3-0          shared-mime-info
  libatomic1                 libice-dev               libxcb-glx0            systemd
  libatspi2.0-0t64           libice6                  libxcb-present0        systemd-cryptsetup
  libavahi-client3           libidn2-0                libxcb-randr0          systemd-resolved
  libavahi-common-data       libjpeg-turbo8           libxcb-render0         systemd-sysv
  libavahi-common3           libjpeg8                 libxcb-shape0          systemd-timesyncd
  libbrotli1                 libjson-c5               libxcb-shm0            tzdata
  libc-dev-bin               libjxl0.11               libxcb-sync1           user-session-migration
  libc6-dev                  libk5crypto3             libxcb-xfixes0         uuid-dev
  libcairo-gobject2          libkeyutils1             libxcb1                x11-common
  libcairo2                  libkmod2                 libxcb1-dev            x11-utils
  libcap2                    libkrb5-3                libxcomposite1         x11proto-dev
  libcolord2                 libkrb5support0          libxcursor1            xdg-user-dirs
  libcryptsetup12            liblcms2-2               libxdamage1            xkb-data
  libcups2t64                libllvm21                libxdmcp-dev           xorg-sgml-doctools
  libdatrie1                 libnettle8t64            libxdmcp6              xtrans-dev
  libdbus-1-3                libnspr4                 libxext6
  libdconf1                  libnss-systemd           libxfixes3
  libdevmapper1.02.1         libnss3                  libxft2

Suggested packages:
  adwaita-icon-theme-legacy  libheif-plugin-jpegdec   libarchive13t64       fonts-indic
  libheif-plugin-x265        libheif-plugin-jpegenc   libbpf1               python3-doc
  | libheif-plugin-kvazaar   libheif-plugin-j2kdec    libdw1t64             python3-tk
  default-jre                libheif-plugin-j2kenc    libfido2-1            python3-venv
  alsa-utils                 libheif-plugin-kvazaar   libpwquality1         python3.14-venv
  libasound2-plugins         libheif-plugin-rav1e     libqrencode4          python3.14-doc
  libc-devtools              libheif-plugin-svtenc    libx11-doc            binutils
  glibc-doc                  libice-doc               libxcb-doc            binfmt-support
  colord                     liblcms2-utils           libxt-doc             readline-doc
  cups-common                libtss2-esys-3.0.2-0t64  man-browser           systemd-container
  low-memory-monitor         libtss2-mu-4.0.1-0t64    openjdk-21-demo       systemd-homed
  gnutls-bin                 libtss2-rc0t64           openjdk-21-source     systemd-boot
  krb5-doc                   systemd-userdbd          visualvm              systemd-repart
  krb5-user                  pciutils                 libnss-mdns           libtss2-tcti-device0
  gvfs                       pcscd                    fonts-ipafont-gothic  polkitd
  libheif-plugin-libde265    librsvg2-bin             fonts-ipafont-mincho  mesa-utils
  libheif-plugin-x265        lm-sensors               fonts-wqy-microhei
  libheif-plugin-ffmpegdec   libsm-doc                | fonts-wqy-zenhei

Summary:
  Upgrading: 0, Installing: 222, Removing: 0, Not Upgrading: 1
  Download size: 256 MB
  Space needed: 834 MB / 1020 GB available

Get:1 http://archive.ubuntu.com/ubuntu resolute/main amd64 libexpat1 amd64 2.7.4-1 [94.0 kB]
Get:2 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libpython3.14-minimal amd64 3.14.4-1ubuntu0.1 [916 kB]
Get:3 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 python3.14-minimal amd64 3.14.4-1ubuntu0.1 [2580 kB]
Get:4 http://archive.ubuntu.com/ubuntu resolute/main amd64 python3-minimal amd64 3.14.3-0ubuntu2 [25.8 kB]
Get:5 http://archive.ubuntu.com/ubuntu resolute/main amd64 media-types all 14.0.0build1 [31.4 kB]
Get:6 http://archive.ubuntu.com/ubuntu resolute/main amd64 netbase all 6.5build1 [13.0 kB]
Get:7 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 tzdata all 2026b-0ubuntu0.26.04.1 [194 kB]
Get:8 http://archive.ubuntu.com/ubuntu resolute/main amd64 libffi8 amd64 3.5.2-4 [26.3 kB]
Get:9 http://archive.ubuntu.com/ubuntu resolute/main amd64 readline-common all 8.3-4 [61.5 kB]
Get:10 http://archive.ubuntu.com/ubuntu resolute/main amd64 libreadline8t64 amd64 8.3-4 [164 kB]
Get:11 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libsqlite3-0 amd64 3.46.1-9ubuntu0.2 [719 kB]
Get:12 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libpython3.14-stdlib amd64 3.14.4-1ubuntu0.1 [2414 kB]
Get:13 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 python3.14 amd64 3.14.4-1ubuntu0.1 [830 kB]
Get:14 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpython3-stdlib amd64 3.14.3-0ubuntu2 [8476 B]
Get:15 http://archive.ubuntu.com/ubuntu resolute/main amd64 python3 amd64 3.14.3-0ubuntu2 [22.9 kB]
Get:16 http://archive.ubuntu.com/ubuntu resolute/main amd64 libsystemd-shared amd64 259.5-0ubuntu3 [2462 kB]
Get:17 http://archive.ubuntu.com/ubuntu resolute/main amd64 systemd amd64 259.5-0ubuntu3 [3128 kB]
Get:18 http://archive.ubuntu.com/ubuntu resolute/main amd64 systemd-sysv amd64 259.5-0ubuntu3 [9242 B]
Get:19 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 openssl amd64 3.5.5-1ubuntu3.2 [1243 kB]
Get:20 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 ca-certificates all 20260601~26.04.1 [139 kB]
Get:21 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdbus-1-3 amd64 1.16.2-2ubuntu4 [186 kB]
Get:22 http://archive.ubuntu.com/ubuntu resolute/main amd64 dbus-bin amd64 1.16.2-2ubuntu4 [40.1 kB]
Get:23 http://archive.ubuntu.com/ubuntu resolute/main amd64 dbus-session-bus-common all 1.16.2-2ubuntu4 [54.5 kB]
Get:24 http://archive.ubuntu.com/ubuntu resolute/main amd64 libapparmor1 amd64 5.0.0~beta1-0ubuntu7 [50.5 kB]
Get:25 http://archive.ubuntu.com/ubuntu resolute/main amd64 dbus-daemon amd64 1.16.2-2ubuntu4 [119 kB]
Get:26 http://archive.ubuntu.com/ubuntu resolute/main amd64 dbus-system-bus-common all 1.16.2-2ubuntu4 [55.9 kB]
Get:27 http://archive.ubuntu.com/ubuntu resolute/main amd64 dbus amd64 1.16.2-2ubuntu4 [24.2 kB]
Get:28 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpam-systemd amd64 259.5-0ubuntu3 [274 kB]
Get:29 http://archive.ubuntu.com/ubuntu resolute/main amd64 dbus-user-session amd64 1.16.2-2ubuntu4 [9682 B]
Get:30 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdevmapper1.02.1 amd64 2:1.02.205-2ubuntu3 [142 kB]
Get:31 http://archive.ubuntu.com/ubuntu resolute/main amd64 dmsetup amd64 2:1.02.205-2ubuntu3 [79.4 kB]
Get:32 http://archive.ubuntu.com/ubuntu resolute/main amd64 krb5-locales all 1.22.1-2ubuntu4 [13.4 kB]
Get:33 http://archive.ubuntu.com/ubuntu resolute/main amd64 libatomic1 amd64 16-20260322-1ubuntu1 [11.4 kB]
Get:34 http://archive.ubuntu.com/ubuntu resolute/main amd64 libcap2 amd64 1:2.75-10ubuntu2 [29.3 kB]
Get:35 http://archive.ubuntu.com/ubuntu resolute/main amd64 libjson-c5 amd64 0.18+ds-3 [35.9 kB]
Get:36 http://archive.ubuntu.com/ubuntu resolute/main amd64 libcryptsetup12 amd64 2:2.8.4-1ubuntu4 [271 kB]
Get:37 http://archive.ubuntu.com/ubuntu resolute/main amd64 libedit2 amd64 3.1-20251016-1 [96.9 kB]
Get:38 http://archive.ubuntu.com/ubuntu resolute/main amd64 libelf1t64 amd64 0.194-4 [57.1 kB]
Get:39 http://archive.ubuntu.com/ubuntu resolute/main amd64 libfribidi0 amd64 1.0.16-5 [26.6 kB]
Get:40 http://archive.ubuntu.com/ubuntu resolute/main amd64 libglib2.0-0t64 amd64 2.88.0-1 [1597 kB]
Get:41 http://archive.ubuntu.com/ubuntu resolute/main amd64 libglib2.0-data all 2.88.0-1 [37.8 kB]
Get:42 http://archive.ubuntu.com/ubuntu resolute/main amd64 libnettle8t64 amd64 3.10.2-1 [185 kB]
Get:43 http://archive.ubuntu.com/ubuntu resolute/main amd64 libhogweed6t64 amd64 3.10.2-1 [201 kB]
Get:44 http://archive.ubuntu.com/ubuntu resolute/main amd64 libunistring5 amd64 1.3-2build1 [610 kB]
Get:45 http://archive.ubuntu.com/ubuntu resolute/main amd64 libidn2-0 amd64 2.3.8-4build1 [67.6 kB]
Get:46 http://archive.ubuntu.com/ubuntu resolute/main amd64 libp11-kit0 amd64 0.26.2-2 [313 kB]
Get:47 http://archive.ubuntu.com/ubuntu resolute/main amd64 libtasn1-6 amd64 4.21.0-2 [45.3 kB]
Get:48 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libgnutls30t64 amd64 3.8.12-2ubuntu1.1 [1029 kB]
Get:49 http://archive.ubuntu.com/ubuntu resolute/main amd64 libkrb5support0 amd64 1.22.1-2ubuntu4 [33.3 kB]
Get:50 http://archive.ubuntu.com/ubuntu resolute/main amd64 libk5crypto3 amd64 1.22.1-2ubuntu4 [82.0 kB]
Get:51 http://archive.ubuntu.com/ubuntu resolute/main amd64 libkeyutils1 amd64 1.6.3-6ubuntu3 [10.6 kB]
Get:52 http://archive.ubuntu.com/ubuntu resolute/main amd64 libkrb5-3 amd64 1.22.1-2ubuntu4 [361 kB]
Get:53 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgssapi-krb5-2 amd64 1.22.1-2ubuntu4 [147 kB]
Get:54 http://archive.ubuntu.com/ubuntu resolute/main amd64 libkmod2 amd64 34.2-2ubuntu2 [50.9 kB]
Get:55 http://archive.ubuntu.com/ubuntu resolute/main amd64 libnss-systemd amd64 259.5-0ubuntu3 [226 kB]
Get:56 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libxml2-16 amd64 2.15.2+dfsg-0.1ubuntu0.1 [606 kB]
Get:57 http://archive.ubuntu.com/ubuntu resolute/main amd64 linux-sysctl-defaults all 4.15ubuntu5 [6208 B]
Get:58 http://archive.ubuntu.com/ubuntu resolute/main amd64 shared-mime-info amd64 2.4-5build3 [476 kB]
Get:59 http://archive.ubuntu.com/ubuntu resolute/main amd64 systemd-cryptsetup amd64 259.5-0ubuntu3 [124 kB]
Get:60 http://archive.ubuntu.com/ubuntu resolute/main amd64 systemd-resolved amd64 259.5-0ubuntu3 [298 kB]
Get:61 http://archive.ubuntu.com/ubuntu resolute/main amd64 xdg-user-dirs amd64 0.19-1 [19.3 kB]
Get:62 http://archive.ubuntu.com/ubuntu resolute/main amd64 xkb-data all 2.46-2 [393 kB]
Get:63 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdrm-common all 2.4.131-1 [9774 B]
Get:64 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdrm2 amd64 2.4.131-1 [42.3 kB]
Get:65 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpng16-16t64 amd64 1.6.57-1 [194 kB]
Get:66 http://archive.ubuntu.com/ubuntu resolute/main amd64 libsensors-config all 1:3.6.2-2build1 [6862 B]
Get:67 http://archive.ubuntu.com/ubuntu resolute/main amd64 libsensors5 amd64 1:3.6.2-2build1 [28.9 kB]
Get:68 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxau6 amd64 1:1.0.11-1build2 [7502 B]
Get:69 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxdmcp6 amd64 1:1.1.5-2 [10.8 kB]
Get:70 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb1 amd64 1.17.0-2ubuntu1 [49.0 kB]
Get:71 http://archive.ubuntu.com/ubuntu resolute/main amd64 libx11-data all 2:1.8.13-1 [114 kB]
Get:72 http://archive.ubuntu.com/ubuntu resolute/main amd64 libx11-6 amd64 2:1.8.13-1 [657 kB]
Get:73 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxext6 amd64 2:1.3.4-1build3 [30.8 kB]
Get:74 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxkbcommon0 amd64 1.13.1-1 [159 kB]
Get:75 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxmuu1 amd64 2:1.1.3-4 [9450 B]
Get:76 http://archive.ubuntu.com/ubuntu resolute/main amd64 manpages all 6.17-1 [1380 kB]
Get:77 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 bubblewrap amd64 0.11.1-1ubuntu0.1 [50.8 kB]
Get:78 http://archive.ubuntu.com/ubuntu resolute/main amd64 libbrotli1 amd64 1.2.0-3build1 [343 kB]
Get:79 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libfreetype6 amd64 2.14.2+dfsg-1ubuntu0.1 [409 kB]
Get:80 http://archive.ubuntu.com/ubuntu resolute/main amd64 fonts-dejavu-mono all 2.37-8build1 [502 kB]
Get:81 http://archive.ubuntu.com/ubuntu resolute/main amd64 fonts-dejavu-core all 2.37-8build1 [834 kB]
Get:82 http://archive.ubuntu.com/ubuntu resolute/main amd64 fontconfig-config amd64 2.17.1-3ubuntu1 [38.5 kB]
Get:83 http://archive.ubuntu.com/ubuntu resolute/main amd64 libfontconfig1 amd64 2.17.1-3ubuntu1 [144 kB]
Get:84 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpixman-1-0 amd64 0.46.4-1 [287 kB]
Get:85 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-render0 amd64 1.17.0-2ubuntu1 [16.2 kB]
Get:86 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-shm0 amd64 1.17.0-2ubuntu1 [5808 B]
Get:87 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxrender1 amd64 1:0.9.12-1build1 [19.2 kB]
Get:88 http://archive.ubuntu.com/ubuntu resolute/main amd64 libcairo2 amd64 1.18.4-3 [579 kB]
Get:89 http://archive.ubuntu.com/ubuntu resolute/main amd64 libsharpyuv0 amd64 1.5.0-0.1build1 [17.6 kB]
Get:90 http://archive.ubuntu.com/ubuntu resolute/main amd64 libaom3 amd64 3.13.1-2 [1970 kB]
Get:91 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libheif-plugin-aomdec amd64 1.21.2-3ubuntu0.3 [14.6 kB]
Get:92 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libheif1 amd64 1.21.2-3ubuntu0.3 [545 kB]
Get:93 http://archive.ubuntu.com/ubuntu resolute/main amd64 libhwy1t64 amd64 1.3.0-2 [768 kB]
Get:94 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 liblcms2-2 amd64 2.17-1ubuntu0.2 [169 kB]
Get:95 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libjxl0.11 amd64 0.11.1-6ubuntu4.2 [1269 kB]
Get:96 http://archive.ubuntu.com/ubuntu resolute/main amd64 libcairo-gobject2 amd64 1.18.4-3 [127 kB]
Get:97 http://archive.ubuntu.com/ubuntu resolute/main amd64 fontconfig amd64 2.17.1-3ubuntu1 [180 kB]
Get:98 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libgraphite2-3 amd64 1.3.14-11ubuntu1.1 [72.9 kB]
Get:99 http://archive.ubuntu.com/ubuntu resolute/main amd64 libharfbuzz0b amd64 12.3.2-2 [519 kB]
Get:100 http://archive.ubuntu.com/ubuntu resolute/main amd64 libthai-data all 0.1.30-1 [155 kB]
Get:101 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdatrie1 amd64 0.2.14-1 [19.8 kB]
Get:102 http://archive.ubuntu.com/ubuntu resolute/main amd64 libthai0 amd64 0.1.30-1 [19.2 kB]
Get:103 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpango-1.0-0 amd64 1.57.0-1 [241 kB]
Get:104 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpangoft2-1.0-0 amd64 1.57.0-1 [53.3 kB]
Get:105 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpangocairo-1.0-0 amd64 1.57.0-1 [29.0 kB]
Get:106 http://archive.ubuntu.com/ubuntu resolute/main amd64 librsvg2-2 amd64 2.61.3+dfsg-3 [1865 kB]
Get:107 http://archive.ubuntu.com/ubuntu resolute/main amd64 glycin-loaders amd64 2.1.1+ds-0ubuntu1 [2979 kB]
Get:108 http://archive.ubuntu.com/ubuntu resolute/main amd64 libglycin-2-0 amd64 2.1.1+ds-0ubuntu1 [1484 kB]
Get:109 http://archive.ubuntu.com/ubuntu resolute/main amd64 glycin-thumbnailers amd64 2.1.1+ds-0ubuntu1 [223 kB]
Get:110 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgdk-pixbuf2.0-common all 2.44.5+dfsg-4ubuntu1 [5754 B]
Get:111 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgdk-pixbuf-2.0-0 amd64 2.44.5+dfsg-4ubuntu1 [101 kB]
Get:112 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 gtk-update-icon-cache amd64 4.22.4+ds-0ubuntu0.1 [42.7 kB]
Get:113 http://archive.ubuntu.com/ubuntu resolute/main amd64 hicolor-icon-theme all 0.18-2build1 [13.2 kB]
Get:114 http://archive.ubuntu.com/ubuntu resolute/main amd64 adwaita-icon-theme all 50.0-1 [580 kB]
Get:115 http://archive.ubuntu.com/ubuntu resolute/main amd64 alsa-topology-conf all 1.2.5.1-3build1 [15.6 kB]
Get:116 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libasound2-data all 1.2.15.3-1ubuntu1.1 [19.6 kB]
Get:117 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libasound2t64 amd64 1.2.15.3-1ubuntu1.1 [416 kB]
Get:118 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 alsa-ucm-conf all 1.2.15.3-1ubuntu1.4 [106 kB]
Get:119 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 at-spi2-common all 2.60.4-0ubuntu0.1 [6604 B]
Get:120 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxi6 amd64 2:1.8.2-2 [33.1 kB]
Get:121 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxres1 amd64 2:1.2.1-1build2 [7036 B]
Get:122 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libatspi2.0-0t64 amd64 2.60.4-0ubuntu0.1 [85.5 kB]
Get:123 http://archive.ubuntu.com/ubuntu resolute/main amd64 x11-common all 1:7.7+26ubuntu1 [22.5 kB]
Get:124 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxtst6 amd64 2:1.2.5-1build1 [13.1 kB]
Get:125 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdconf1 amd64 0.49.0-4 [40.5 kB]
Get:126 http://archive.ubuntu.com/ubuntu resolute/main amd64 dconf-service amd64 0.49.0-4 [27.7 kB]
Get:127 http://archive.ubuntu.com/ubuntu resolute/main amd64 dconf-gsettings-backend amd64 0.49.0-4 [22.2 kB]
Get:128 http://archive.ubuntu.com/ubuntu resolute/main amd64 user-session-migration amd64 0.5.1 [10.7 kB]
Get:129 http://archive.ubuntu.com/ubuntu resolute/main amd64 gsettings-desktop-schemas all 50.0-1ubuntu2 [37.8 kB]
Get:130 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 at-spi2-core amd64 2.60.4-0ubuntu0.1 [59.6 kB]
Get:131 http://archive.ubuntu.com/ubuntu resolute/main amd64 ca-certificates-java all 20260311 [11.3 kB]
Get:132 http://archive.ubuntu.com/ubuntu resolute/main amd64 fonts-dejavu-extra all 2.37-8build1 [1944 kB]
Get:133 http://archive.ubuntu.com/ubuntu resolute/main amd64 libibus-1.0-5 amd64 1.5.34~rc2-1 [181 kB]
Get:134 http://archive.ubuntu.com/ubuntu resolute/main amd64 ibus-gtk3 amd64 1.5.34~rc2-1 [19.7 kB]
Get:135 http://archive.ubuntu.com/ubuntu resolute/main amd64 java-common all 0.77 [6682 B]
Get:136 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libatk1.0-0t64 amd64 2.60.4-0ubuntu0.1 [53.5 kB]
Get:137 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libatk-bridge2.0-0t64 amd64 2.60.4-0ubuntu0.1 [67.2 kB]
Get:138 http://archive.ubuntu.com/ubuntu resolute/main amd64 libglvnd0 amd64 1.7.0-3 [64.1 kB]
Get:139 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdrm-amdgpu1 amd64 2.4.131-1 [23.2 kB]
Get:140 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpciaccess0 amd64 0.18.1-1ubuntu4 [19.2 kB]
Get:141 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdrm-intel1 amd64 2.4.131-1 [66.7 kB]
Get:142 http://archive.ubuntu.com/ubuntu resolute/main amd64 libllvm21 amd64 1:21.1.8-6ubuntu1 [30.7 MB]
Get:143 http://archive.ubuntu.com/ubuntu resolute/main amd64 libx11-xcb1 amd64 2:1.8.13-1 [7960 B]
Get:144 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-dri3-0 amd64 1.17.0-2ubuntu1 [7540 B]
Get:145 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-present0 amd64 1.17.0-2ubuntu1 [6112 B]
Get:146 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-randr0 amd64 1.17.0-2ubuntu1 [17.9 kB]
Get:147 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-sync1 amd64 1.17.0-2ubuntu1 [9348 B]
Get:148 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-xfixes0 amd64 1.17.0-2ubuntu1 [10.2 kB]
Get:149 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxshmfence1 amd64 1.3.3-1build1 [5284 B]
Get:150 http://archive.ubuntu.com/ubuntu resolute/main amd64 mesa-libgallium amd64 26.0.3-1ubuntu1 [11.2 MB]
Get:151 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgbm1 amd64 26.0.3-1ubuntu1 [49.2 kB]
Get:152 http://archive.ubuntu.com/ubuntu resolute/main amd64 libvulkan1 amd64 1.4.341.0-1 [157 kB]
Get:153 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgl1-mesa-dri amd64 26.0.3-1ubuntu1 [38.0 kB]
Get:154 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-glx0 amd64 1.17.0-2ubuntu1 [24.7 kB]
Get:155 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxxf86vm1 amd64 1:1.1.4-2 [10.6 kB]
Get:156 http://archive.ubuntu.com/ubuntu resolute/main amd64 libglx-mesa0 amd64 26.0.3-1ubuntu1 [126 kB]
Get:157 http://archive.ubuntu.com/ubuntu resolute/main amd64 libglx0 amd64 1.7.0-3 [38.9 kB]
Get:158 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgl1 amd64 1.7.0-3 [98.3 kB]
Get:159 http://archive.ubuntu.com/ubuntu resolute/main amd64 libice6 amd64 2:1.1.1-1build1 [44.0 kB]
Get:160 http://archive.ubuntu.com/ubuntu resolute/main amd64 libsm6 amd64 2:1.2.6-1build1 [16.9 kB]
Get:161 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxt6t64 amd64 1:1.2.1-1.3build1 [173 kB]
Get:162 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxmu6 amd64 2:1.1.3-4 [48.9 kB]
Get:163 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxpm4 amd64 1:3.5.17-1build3 [37.3 kB]
Get:164 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxaw7 amd64 2:1.0.16-1build1 [190 kB]
Get:165 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb-shape0 amd64 1.17.0-2ubuntu1 [6172 B]
Get:166 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcomposite1 amd64 1:0.4.6-1build1 [6664 B]
Get:167 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxft2 amd64 2.3.6-1build2 [45.1 kB]
Get:168 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxinerama1 amd64 2:1.1.4-3build2 [6472 B]
Get:169 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxkbfile1 amd64 1:1.1.0-1build5 [70.1 kB]
Get:170 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxrandr2 amd64 2:1.5.4-1build1 [19.6 kB]
Get:171 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxv1 amd64 2:1.0.13-1 [10.8 kB]
Get:172 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxxf86dga1 amd64 2:1.1.5-1build2 [11.9 kB]
Get:173 http://archive.ubuntu.com/ubuntu resolute/main amd64 x11-utils amd64 7.7+7build1 [191 kB]
Get:174 http://archive.ubuntu.com/ubuntu resolute/main amd64 libatk-wrapper-java all 0.44.0-1 [55.2 kB]
Get:175 http://archive.ubuntu.com/ubuntu resolute/main amd64 libatk-wrapper-java-jni amd64 0.44.0-1 [48.0 kB]
Get:176 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libavahi-common-data amd64 0.8-18ubuntu1.1 [27.2 kB]
Get:177 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libavahi-common3 amd64 0.8-18ubuntu1.1 [23.6 kB]
Get:178 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libavahi-client3 amd64 0.8-18ubuntu1.1 [27.2 kB]
Get:179 http://archive.ubuntu.com/ubuntu resolute/main amd64 libc-dev-bin amd64 2.43-2ubuntu2 [23.3 kB]
Get:180 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 linux-libc-dev amd64 7.0.0-28.28 [1619 kB]
Get:181 http://archive.ubuntu.com/ubuntu resolute/main amd64 rpcsvc-proto amd64 1.4.3-1build1 [68.3 kB]
Get:182 http://archive.ubuntu.com/ubuntu resolute/main amd64 libc6-dev amd64 2.43-2ubuntu2 [2295 kB]
Get:183 http://archive.ubuntu.com/ubuntu resolute/main amd64 libcolord2 amd64 1.4.8-3 [150 kB]
Get:184 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libcups2t64 amd64 2.4.16-1ubuntu1.3 [269 kB]
Get:185 http://archive.ubuntu.com/ubuntu resolute/main amd64 libdisplay-info3 amd64 0.3.0-1 [87.8 kB]
Get:186 http://archive.ubuntu.com/ubuntu resolute/main amd64 libepoxy0 amd64 1.5.10-2build1 [226 kB]
Get:187 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgif7 amd64 5.2.2-1ubuntu3 [36.0 kB]
Get:188 http://archive.ubuntu.com/ubuntu resolute/main amd64 libwayland-client0 amd64 1.24.0-2 [28.5 kB]
Get:189 http://archive.ubuntu.com/ubuntu resolute/main amd64 libwayland-cursor0 amd64 1.24.0-2 [10.8 kB]
Get:190 http://archive.ubuntu.com/ubuntu resolute/main amd64 libwayland-egl1 amd64 1.24.0-2 [6248 B]
Get:191 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxfixes3 amd64 1:6.0.0-2build2 [11.1 kB]
Get:192 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcursor1 amd64 1:1.2.3-1build1 [22.1 kB]
Get:193 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxdamage1 amd64 1:1.1.7-1 [6582 B]
Get:194 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgtk-3-common all 3.24.52-0ubuntu1 [1424 kB]
Get:195 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgtk-3-0t64 amd64 3.24.52-0ubuntu1 [3072 kB]
Get:196 http://archive.ubuntu.com/ubuntu resolute/main amd64 libgtk-3-bin amd64 3.24.52-0ubuntu1 [73.9 kB]
Get:197 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libheif-plugin-aomenc amd64 1.21.2-3ubuntu0.3 [21.0 kB]
Get:198 http://archive.ubuntu.com/ubuntu resolute/main amd64 xorg-sgml-doctools all 1:1.11-1.1build1 [10.3 kB]
Get:199 http://archive.ubuntu.com/ubuntu resolute/main amd64 x11proto-dev all 2025.1-1 [608 kB]
Get:200 http://archive.ubuntu.com/ubuntu resolute/main amd64 libice-dev amd64 2:1.1.1-1build1 [53.5 kB]
Get:201 http://archive.ubuntu.com/ubuntu resolute/main amd64 libjpeg-turbo8 amd64 2.1.5-4ubuntu4 [153 kB]
Get:202 http://archive.ubuntu.com/ubuntu resolute/main amd64 libjpeg8 amd64 8c-2ubuntu12 [2142 B]
Get:203 http://archive.ubuntu.com/ubuntu resolute/main amd64 libnspr4 amd64 2:4.38.2-1ubuntu1 [118 kB]
Get:204 http://archive.ubuntu.com/ubuntu resolute-updates/main amd64 libnss3 amd64 2:3.120-1ubuntu2.1 [1515 kB]
Get:205 http://archive.ubuntu.com/ubuntu resolute/main amd64 libpcsclite1 amd64 2.4.1-1 [24.6 kB]
Get:206 http://archive.ubuntu.com/ubuntu resolute/main amd64 librsvg2-common amd64 2.61.3+dfsg-3 [153 kB]
Get:207 http://archive.ubuntu.com/ubuntu resolute/main amd64 uuid-dev amd64 2.41.3-3ubuntu2 [48.5 kB]
Get:208 http://archive.ubuntu.com/ubuntu resolute/main amd64 libsm-dev amd64 2:1.2.6-1build1 [18.8 kB]
Get:209 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxau-dev amd64 1:1.0.11-1build2 [9712 B]
Get:210 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxdmcp-dev amd64 1:1.1.5-2 [25.7 kB]
Get:211 http://archive.ubuntu.com/ubuntu resolute/main amd64 xtrans-dev all 1.6.0-1build1 [66.2 kB]
Get:212 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxcb1-dev amd64 1.17.0-2ubuntu1 [86.3 kB]
Get:213 http://archive.ubuntu.com/ubuntu resolute/main amd64 libx11-dev amd64 2:1.8.13-1 [739 kB]
Get:214 http://archive.ubuntu.com/ubuntu resolute/main amd64 libxt-dev amd64 1:1.2.1-1.3build1 [396 kB]
Get:215 http://archive.ubuntu.com/ubuntu resolute/main amd64 luit amd64 2.0.20250912-1 [41.6 kB]
Get:216 http://archive.ubuntu.com/ubuntu resolute/main amd64 manpages-dev all 6.17-1 [2183 kB]
Get:217 http://archive.ubuntu.com/ubuntu resolute/main amd64 mesa-vulkan-drivers amd64 26.0.3-1ubuntu1 [18.9 MB]
Get:218 http://archive.ubuntu.com/ubuntu resolute-updates/universe amd64 openjdk-21-jre-headless amd64 21.0.11+10-1~26.04.2 [46.6 MB]
Get:219 http://archive.ubuntu.com/ubuntu resolute-updates/universe amd64 openjdk-21-jre amd64 21.0.11+10-1~26.04.2 [226 kB]
Get:220 http://archive.ubuntu.com/ubuntu resolute-updates/universe amd64 openjdk-21-jdk-headless amd64 21.0.11+10-1~26.04.2 [83.1 MB]
Get:221 http://archive.ubuntu.com/ubuntu resolute-updates/universe amd64 openjdk-21-jdk amd64 21.0.11+10-1~26.04.2 [1666 kB]
Get:222 http://archive.ubuntu.com/ubuntu resolute/main amd64 systemd-timesyncd amd64 259.5-0ubuntu3 [41.2 kB]
Fetched 256 MB in 49s (5238 kB/s)
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 79, <STDIN> line 222.)
debconf: falling back to frontend: Readline
debconf: unable to initialize frontend: Readline
debconf: (Can't locate Term/ReadLine.pm in @INC (you may need to install the Term::ReadLine module) (@INC entries checked: /etc/perl /usr/local/lib/x86_64-linux-gnu/perl/5.40.1 /usr/local/share/perl/5.40.1 /usr/lib/x86_64-linux-gnu/perl5/5.40 /usr/share/perl5 /usr/lib/x86_64-linux-gnu/perl-base /usr/lib/x86_64-linux-gnu/perl/5.40 /usr/share/perl/5.40 /usr/local/lib/site_perl) at /usr/share/perl5/Debconf/FrontEnd/Readline.pm line 8, <STDIN> line 222.)
debconf: falling back to frontend: Teletype
Extracting templates from packages: 100%
Preconfiguring packages ...
Configuring tzdata
------------------

Please select the geographic area in which you live. Subsequent configuration questions will narrow this down by
presenting a list of cities, representing the time zones in which they are located.

  1. Africa   3. Antarctica  5. Asia      7. Australia  9. Indian    11. Etc
  2. America  4. Arctic      6. Atlantic  8. Europe     10. Pacific
Geographic area: 5

Please select the city or region corresponding to your time zone.

  1. Aden      14. Beirut     27. Harbin       40. Kashgar       53. Nicosia       66. Samarkand      79. Ulaanbaatar
  2. Almaty    15. Bishkek    28. Hebron       41. Kathmandu     54. Novokuznetsk  67. Seoul          80. Urumqi
  3. Amman     16. Brunei     29. Ho_Chi_Minh  42. Khandyga      55. Novosibirsk   68. Shanghai       81. Ust-Nera
  4. Anadyr    17. Chita      30. Hong_Kong    43. Kolkata       56. Omsk          69. Singapore      82. Vientiane
  5. Aqtau     18. Chongqing  31. Hovd         44. Krasnoyarsk   57. Oral          70. Srednekolymsk  83. Vladivostok
  6. Aqtobe    19. Colombo    32. Irkutsk      45. Kuala_Lumpur  58. Phnom_Penh    71. Taipei         84. Yakutsk
  7. Ashgabat  20. Damascus   33. Istanbul     46. Kuching       59. Pontianak     72. Tashkent       85. Yangon
  8. Atyrau    21. Dhaka      34. Jakarta      47. Kuwait        60. Pyongyang     73. Tbilisi        86. Yekaterinburg
  9. Baghdad   22. Dili       35. Jayapura     48. Macau         61. Qatar         74. Tehran         87. Yerevan
  10. Bahrain  23. Dubai      36. Jerusalem    49. Magadan       62. Qostanay      75. Tel_Aviv
  11. Baku     24. Dushanbe   37. Kabul        50. Makassar      63. Qyzylorda     76. Thimphu
  12. Bangkok  25. Famagusta  38. Kamchatka    51. Manila        64. Riyadh        77. Tokyo
  13. Barnaul  26. Gaza       39. Karachi      52. Muscat        65. Sakhalin      78. Tomsk
Time zone: 77

Selecting previously unselected package libexpat1:amd64.
(Reading database ... 7724 files and directories currently installed.)
Preparing to unpack .../libexpat1_2.7.4-1_amd64.deb ...
Unpacking libexpat1:amd64 (2.7.4-1) ...
Selecting previously unselected package libpython3.14-minimal:amd64.
Preparing to unpack .../libpython3.14-minimal_3.14.4-1ubuntu0.1_amd64.deb ...
Unpacking libpython3.14-minimal:amd64 (3.14.4-1ubuntu0.1) ...
Selecting previously unselected package python3.14-minimal.
Preparing to unpack .../python3.14-minimal_3.14.4-1ubuntu0.1_amd64.deb ...
Unpacking python3.14-minimal (3.14.4-1ubuntu0.1) ...
Setting up libpython3.14-minimal:amd64 (3.14.4-1ubuntu0.1) ...
Setting up libexpat1:amd64 (2.7.4-1) ...
Setting up python3.14-minimal (3.14.4-1ubuntu0.1) ...
Selecting previously unselected package python3-minimal.
(Reading database ... 8078 files and directories currently installed.)
Preparing to unpack .../00-python3-minimal_3.14.3-0ubuntu2_amd64.deb ...
Unpacking python3-minimal (3.14.3-0ubuntu2) ...
Selecting previously unselected package media-types.
Preparing to unpack .../01-media-types_14.0.0build1_all.deb ...
Unpacking media-types (14.0.0build1) ...
Selecting previously unselected package netbase.
Preparing to unpack .../02-netbase_6.5build1_all.deb ...
Unpacking netbase (6.5build1) ...
Selecting previously unselected package tzdata.
Preparing to unpack .../03-tzdata_2026b-0ubuntu0.26.04.1_all.deb ...
Unpacking tzdata (2026b-0ubuntu0.26.04.1) ...
Selecting previously unselected package libffi8:amd64.
Preparing to unpack .../04-libffi8_3.5.2-4_amd64.deb ...
Unpacking libffi8:amd64 (3.5.2-4) ...
Selecting previously unselected package readline-common.
Preparing to unpack .../05-readline-common_8.3-4_all.deb ...
Unpacking readline-common (8.3-4) ...
Selecting previously unselected package libreadline8t64:amd64.
Preparing to unpack .../06-libreadline8t64_8.3-4_amd64.deb ...
Adding 'diversion of /lib/x86_64-linux-gnu/libhistory.so.8 to /lib/x86_64-linux-gnu/libhistory.so.8.usr-is-merged by libreadline8t64'
Adding 'diversion of /lib/x86_64-linux-gnu/libhistory.so.8.2 to /lib/x86_64-linux-gnu/libhistory.so.8.2.usr-is-merged by libreadline8t64'
Adding 'diversion of /lib/x86_64-linux-gnu/libreadline.so.8 to /lib/x86_64-linux-gnu/libreadline.so.8.usr-is-merged by libreadline8t64'
Adding 'diversion of /lib/x86_64-linux-gnu/libreadline.so.8.2 to /lib/x86_64-linux-gnu/libreadline.so.8.2.usr-is-merged by libreadline8t64'
Unpacking libreadline8t64:amd64 (8.3-4) ...
Selecting previously unselected package libsqlite3-0:amd64.
Preparing to unpack .../07-libsqlite3-0_3.46.1-9ubuntu0.2_amd64.deb ...
Unpacking libsqlite3-0:amd64 (3.46.1-9ubuntu0.2) ...
Selecting previously unselected package libpython3.14-stdlib:amd64.
Preparing to unpack .../08-libpython3.14-stdlib_3.14.4-1ubuntu0.1_amd64.deb ...
Unpacking libpython3.14-stdlib:amd64 (3.14.4-1ubuntu0.1) ...
Selecting previously unselected package python3.14.
Preparing to unpack .../09-python3.14_3.14.4-1ubuntu0.1_amd64.deb ...
Unpacking python3.14 (3.14.4-1ubuntu0.1) ...
Selecting previously unselected package libpython3-stdlib:amd64.
Preparing to unpack .../10-libpython3-stdlib_3.14.3-0ubuntu2_amd64.deb ...
Unpacking libpython3-stdlib:amd64 (3.14.3-0ubuntu2) ...
Setting up python3-minimal (3.14.3-0ubuntu2) ...
Selecting previously unselected package python3.
(Reading database ... 9109 files and directories currently installed.)
Preparing to unpack .../python3_3.14.3-0ubuntu2_amd64.deb ...
Unpacking python3 (3.14.3-0ubuntu2) ...
Selecting previously unselected package libsystemd-shared:amd64.
Preparing to unpack .../libsystemd-shared_259.5-0ubuntu3_amd64.deb ...
Unpacking libsystemd-shared:amd64 (259.5-0ubuntu3) ...
Setting up libsystemd-shared:amd64 (259.5-0ubuntu3) ...
Selecting previously unselected package systemd.
(Reading database ... 9138 files and directories currently installed.)
Preparing to unpack .../systemd_259.5-0ubuntu3_amd64.deb ...
Unpacking systemd (259.5-0ubuntu3) ...
Setting up systemd (259.5-0ubuntu3) ...
Created symlink '/etc/systemd/system/getty.target.wants/getty@tty1.service' → '/usr/lib/systemd/system/getty@.service'.
Created symlink '/etc/systemd/system/multi-user.target.wants/remote-fs.target' → '/usr/lib/systemd/system/remote-fs.target'.
Created symlink '/etc/systemd/system/sysinit.target.wants/systemd-pstore.service' → '/usr/lib/systemd/system/systemd-pstore.service'.
Initializing machine ID from random generator.
/usr/lib/tmpfiles.d/systemd-network.conf:10: Failed to resolve user 'systemd-network': Unknown user
/usr/lib/tmpfiles.d/systemd-network.conf:11: Failed to resolve user 'systemd-network': Unknown user
/usr/lib/tmpfiles.d/systemd-network.conf:12: Failed to resolve user 'systemd-network': Unknown user
/usr/lib/tmpfiles.d/systemd-network.conf:13: Failed to resolve user 'systemd-network': Unknown user
/usr/lib/tmpfiles.d/systemd.conf:21: Failed to resolve group 'systemd-journal': Unknown group
/usr/lib/tmpfiles.d/systemd.conf:22: Failed to resolve group 'systemd-journal': Unknown group
/usr/lib/tmpfiles.d/systemd.conf:26: Failed to resolve group 'systemd-journal': Unknown group
/usr/lib/tmpfiles.d/systemd.conf:27: Failed to resolve group 'systemd-journal': Unknown group
/usr/lib/tmpfiles.d/systemd.conf:28: Failed to resolve group 'systemd-journal': Unknown group
Creating group 'systemd-journal' with GID 999.
Creating group 'systemd-network' with GID 998.
Creating user 'systemd-network' (systemd Network Management) with UID 998 and GID 998.
Selecting previously unselected package systemd-sysv.
(Reading database ... 10116 files and directories currently installed.)
Preparing to unpack .../000-systemd-sysv_259.5-0ubuntu3_amd64.deb ...
Unpacking systemd-sysv (259.5-0ubuntu3) ...
Selecting previously unselected package openssl.
Preparing to unpack .../001-openssl_3.5.5-1ubuntu3.2_amd64.deb ...
Unpacking openssl (3.5.5-1ubuntu3.2) ...
Selecting previously unselected package ca-certificates.
Preparing to unpack .../002-ca-certificates_20260601~26.04.1_all.deb ...
Unpacking ca-certificates (20260601~26.04.1) ...
Selecting previously unselected package libdbus-1-3:amd64.
Preparing to unpack .../003-libdbus-1-3_1.16.2-2ubuntu4_amd64.deb ...
Unpacking libdbus-1-3:amd64 (1.16.2-2ubuntu4) ...
Selecting previously unselected package dbus-bin.
Preparing to unpack .../004-dbus-bin_1.16.2-2ubuntu4_amd64.deb ...
Unpacking dbus-bin (1.16.2-2ubuntu4) ...
Selecting previously unselected package dbus-session-bus-common.
Preparing to unpack .../005-dbus-session-bus-common_1.16.2-2ubuntu4_all.deb ...
Unpacking dbus-session-bus-common (1.16.2-2ubuntu4) ...
Selecting previously unselected package libapparmor1:amd64.
Preparing to unpack .../006-libapparmor1_5.0.0~beta1-0ubuntu7_amd64.deb ...
Unpacking libapparmor1:amd64 (5.0.0~beta1-0ubuntu7) ...
Selecting previously unselected package dbus-daemon.
Preparing to unpack .../007-dbus-daemon_1.16.2-2ubuntu4_amd64.deb ...
Unpacking dbus-daemon (1.16.2-2ubuntu4) ...
Selecting previously unselected package dbus-system-bus-common.
Preparing to unpack .../008-dbus-system-bus-common_1.16.2-2ubuntu4_all.deb ...
Unpacking dbus-system-bus-common (1.16.2-2ubuntu4) ...
Selecting previously unselected package dbus.
Preparing to unpack .../009-dbus_1.16.2-2ubuntu4_amd64.deb ...
Unpacking dbus (1.16.2-2ubuntu4) ...
Selecting previously unselected package libpam-systemd:amd64.
Preparing to unpack .../010-libpam-systemd_259.5-0ubuntu3_amd64.deb ...
Unpacking libpam-systemd:amd64 (259.5-0ubuntu3) ...
Selecting previously unselected package dbus-user-session.
Preparing to unpack .../011-dbus-user-session_1.16.2-2ubuntu4_amd64.deb ...
Unpacking dbus-user-session (1.16.2-2ubuntu4) ...
Selecting previously unselected package libdevmapper1.02.1:amd64.
Preparing to unpack .../012-libdevmapper1.02.1_2%3a1.02.205-2ubuntu3_amd64.deb ...
Unpacking libdevmapper1.02.1:amd64 (2:1.02.205-2ubuntu3) ...
Selecting previously unselected package dmsetup.
Preparing to unpack .../013-dmsetup_2%3a1.02.205-2ubuntu3_amd64.deb ...
Unpacking dmsetup (2:1.02.205-2ubuntu3) ...
Selecting previously unselected package krb5-locales.
Preparing to unpack .../014-krb5-locales_1.22.1-2ubuntu4_all.deb ...
Unpacking krb5-locales (1.22.1-2ubuntu4) ...
Selecting previously unselected package libatomic1:amd64.
Preparing to unpack .../015-libatomic1_16-20260322-1ubuntu1_amd64.deb ...
Unpacking libatomic1:amd64 (16-20260322-1ubuntu1) ...
Selecting previously unselected package libcap2:amd64.
Preparing to unpack .../016-libcap2_1%3a2.75-10ubuntu2_amd64.deb ...
Unpacking libcap2:amd64 (1:2.75-10ubuntu2) ...
Selecting previously unselected package libjson-c5:amd64.
Preparing to unpack .../017-libjson-c5_0.18+ds-3_amd64.deb ...
Unpacking libjson-c5:amd64 (0.18+ds-3) ...
Selecting previously unselected package libcryptsetup12:amd64.
Preparing to unpack .../018-libcryptsetup12_2%3a2.8.4-1ubuntu4_amd64.deb ...
Unpacking libcryptsetup12:amd64 (2:2.8.4-1ubuntu4) ...
Selecting previously unselected package libedit2:amd64.
Preparing to unpack .../019-libedit2_3.1-20251016-1_amd64.deb ...
Unpacking libedit2:amd64 (3.1-20251016-1) ...
Selecting previously unselected package libelf1t64:amd64.
Preparing to unpack .../020-libelf1t64_0.194-4_amd64.deb ...
Unpacking libelf1t64:amd64 (0.194-4) ...
Selecting previously unselected package libfribidi0:amd64.
Preparing to unpack .../021-libfribidi0_1.0.16-5_amd64.deb ...
Unpacking libfribidi0:amd64 (1.0.16-5) ...
Selecting previously unselected package libglib2.0-0t64:amd64.
Preparing to unpack .../022-libglib2.0-0t64_2.88.0-1_amd64.deb ...
Unpacking libglib2.0-0t64:amd64 (2.88.0-1) ...
Selecting previously unselected package libglib2.0-data.
Preparing to unpack .../023-libglib2.0-data_2.88.0-1_all.deb ...
Unpacking libglib2.0-data (2.88.0-1) ...
Selecting previously unselected package libnettle8t64:amd64.
Preparing to unpack .../024-libnettle8t64_3.10.2-1_amd64.deb ...
Unpacking libnettle8t64:amd64 (3.10.2-1) ...
Selecting previously unselected package libhogweed6t64:amd64.
Preparing to unpack .../025-libhogweed6t64_3.10.2-1_amd64.deb ...
Unpacking libhogweed6t64:amd64 (3.10.2-1) ...
Selecting previously unselected package libunistring5:amd64.
Preparing to unpack .../026-libunistring5_1.3-2build1_amd64.deb ...
Unpacking libunistring5:amd64 (1.3-2build1) ...
Selecting previously unselected package libidn2-0:amd64.
Preparing to unpack .../027-libidn2-0_2.3.8-4build1_amd64.deb ...
Unpacking libidn2-0:amd64 (2.3.8-4build1) ...
Selecting previously unselected package libp11-kit0:amd64.
Preparing to unpack .../028-libp11-kit0_0.26.2-2_amd64.deb ...
Unpacking libp11-kit0:amd64 (0.26.2-2) ...
Selecting previously unselected package libtasn1-6:amd64.
Preparing to unpack .../029-libtasn1-6_4.21.0-2_amd64.deb ...
Unpacking libtasn1-6:amd64 (4.21.0-2) ...
Selecting previously unselected package libgnutls30t64:amd64.
Preparing to unpack .../030-libgnutls30t64_3.8.12-2ubuntu1.1_amd64.deb ...
Unpacking libgnutls30t64:amd64 (3.8.12-2ubuntu1.1) ...
Selecting previously unselected package libkrb5support0:amd64.
Preparing to unpack .../031-libkrb5support0_1.22.1-2ubuntu4_amd64.deb ...
Unpacking libkrb5support0:amd64 (1.22.1-2ubuntu4) ...
Selecting previously unselected package libk5crypto3:amd64.
Preparing to unpack .../032-libk5crypto3_1.22.1-2ubuntu4_amd64.deb ...
Unpacking libk5crypto3:amd64 (1.22.1-2ubuntu4) ...
Selecting previously unselected package libkeyutils1:amd64.
Preparing to unpack .../033-libkeyutils1_1.6.3-6ubuntu3_amd64.deb ...
Unpacking libkeyutils1:amd64 (1.6.3-6ubuntu3) ...
Selecting previously unselected package libkrb5-3:amd64.
Preparing to unpack .../034-libkrb5-3_1.22.1-2ubuntu4_amd64.deb ...
Unpacking libkrb5-3:amd64 (1.22.1-2ubuntu4) ...
Selecting previously unselected package libgssapi-krb5-2:amd64.
Preparing to unpack .../035-libgssapi-krb5-2_1.22.1-2ubuntu4_amd64.deb ...
Unpacking libgssapi-krb5-2:amd64 (1.22.1-2ubuntu4) ...
Selecting previously unselected package libkmod2:amd64.
Preparing to unpack .../036-libkmod2_34.2-2ubuntu2_amd64.deb ...
Unpacking libkmod2:amd64 (34.2-2ubuntu2) ...
Selecting previously unselected package libnss-systemd:amd64.
Preparing to unpack .../037-libnss-systemd_259.5-0ubuntu3_amd64.deb ...
Unpacking libnss-systemd:amd64 (259.5-0ubuntu3) ...
Selecting previously unselected package libxml2-16:amd64.
Preparing to unpack .../038-libxml2-16_2.15.2+dfsg-0.1ubuntu0.1_amd64.deb ...
Unpacking libxml2-16:amd64 (2.15.2+dfsg-0.1ubuntu0.1) ...
Selecting previously unselected package linux-sysctl-defaults.
Preparing to unpack .../039-linux-sysctl-defaults_4.15ubuntu5_all.deb ...
Unpacking linux-sysctl-defaults (4.15ubuntu5) ...
Selecting previously unselected package shared-mime-info.
Preparing to unpack .../040-shared-mime-info_2.4-5build3_amd64.deb ...
Unpacking shared-mime-info (2.4-5build3) ...
Selecting previously unselected package systemd-cryptsetup.
Preparing to unpack .../041-systemd-cryptsetup_259.5-0ubuntu3_amd64.deb ...
Unpacking systemd-cryptsetup (259.5-0ubuntu3) ...
Selecting previously unselected package systemd-resolved.
Preparing to unpack .../042-systemd-resolved_259.5-0ubuntu3_amd64.deb ...
Unpacking systemd-resolved (259.5-0ubuntu3) ...
Selecting previously unselected package xdg-user-dirs.
Preparing to unpack .../043-xdg-user-dirs_0.19-1_amd64.deb ...
Unpacking xdg-user-dirs (0.19-1) ...
Selecting previously unselected package xkb-data.
Preparing to unpack .../044-xkb-data_2.46-2_all.deb ...
Unpacking xkb-data (2.46-2) ...
Selecting previously unselected package libdrm-common.
Preparing to unpack .../045-libdrm-common_2.4.131-1_all.deb ...
Unpacking libdrm-common (2.4.131-1) ...
Selecting previously unselected package libdrm2:amd64.
Preparing to unpack .../046-libdrm2_2.4.131-1_amd64.deb ...
Unpacking libdrm2:amd64 (2.4.131-1) ...
Selecting previously unselected package libpng16-16t64:amd64.
Preparing to unpack .../047-libpng16-16t64_1.6.57-1_amd64.deb ...
Unpacking libpng16-16t64:amd64 (1.6.57-1) ...
Selecting previously unselected package libsensors-config.
Preparing to unpack .../048-libsensors-config_1%3a3.6.2-2build1_all.deb ...
Unpacking libsensors-config (1:3.6.2-2build1) ...
Selecting previously unselected package libsensors5:amd64.
Preparing to unpack .../049-libsensors5_1%3a3.6.2-2build1_amd64.deb ...
Unpacking libsensors5:amd64 (1:3.6.2-2build1) ...
Selecting previously unselected package libxau6:amd64.
Preparing to unpack .../050-libxau6_1%3a1.0.11-1build2_amd64.deb ...
Unpacking libxau6:amd64 (1:1.0.11-1build2) ...
Selecting previously unselected package libxdmcp6:amd64.
Preparing to unpack .../051-libxdmcp6_1%3a1.1.5-2_amd64.deb ...
Unpacking libxdmcp6:amd64 (1:1.1.5-2) ...
Selecting previously unselected package libxcb1:amd64.
Preparing to unpack .../052-libxcb1_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb1:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libx11-data.
Preparing to unpack .../053-libx11-data_2%3a1.8.13-1_all.deb ...
Unpacking libx11-data (2:1.8.13-1) ...
Selecting previously unselected package libx11-6:amd64.
Preparing to unpack .../054-libx11-6_2%3a1.8.13-1_amd64.deb ...
Unpacking libx11-6:amd64 (2:1.8.13-1) ...
Selecting previously unselected package libxext6:amd64.
Preparing to unpack .../055-libxext6_2%3a1.3.4-1build3_amd64.deb ...
Unpacking libxext6:amd64 (2:1.3.4-1build3) ...
Selecting previously unselected package libxkbcommon0:amd64.
Preparing to unpack .../056-libxkbcommon0_1.13.1-1_amd64.deb ...
Unpacking libxkbcommon0:amd64 (1.13.1-1) ...
Selecting previously unselected package libxmuu1:amd64.
Preparing to unpack .../057-libxmuu1_2%3a1.1.3-4_amd64.deb ...
Unpacking libxmuu1:amd64 (2:1.1.3-4) ...
Selecting previously unselected package manpages.
Preparing to unpack .../058-manpages_6.17-1_all.deb ...
Unpacking manpages (6.17-1) ...
Selecting previously unselected package bubblewrap.
Preparing to unpack .../059-bubblewrap_0.11.1-1ubuntu0.1_amd64.deb ...
Unpacking bubblewrap (0.11.1-1ubuntu0.1) ...
Selecting previously unselected package libbrotli1:amd64.
Preparing to unpack .../060-libbrotli1_1.2.0-3build1_amd64.deb ...
Unpacking libbrotli1:amd64 (1.2.0-3build1) ...
Selecting previously unselected package libfreetype6:amd64.
Preparing to unpack .../061-libfreetype6_2.14.2+dfsg-1ubuntu0.1_amd64.deb ...
Unpacking libfreetype6:amd64 (2.14.2+dfsg-1ubuntu0.1) ...
Selecting previously unselected package fonts-dejavu-mono.
Preparing to unpack .../062-fonts-dejavu-mono_2.37-8build1_all.deb ...
Unpacking fonts-dejavu-mono (2.37-8build1) ...
Selecting previously unselected package fonts-dejavu-core.
Preparing to unpack .../063-fonts-dejavu-core_2.37-8build1_all.deb ...
Unpacking fonts-dejavu-core (2.37-8build1) ...
Selecting previously unselected package fontconfig-config.
Preparing to unpack .../064-fontconfig-config_2.17.1-3ubuntu1_amd64.deb ...
Unpacking fontconfig-config (2.17.1-3ubuntu1) ...
Selecting previously unselected package libfontconfig1:amd64.
Preparing to unpack .../065-libfontconfig1_2.17.1-3ubuntu1_amd64.deb ...
Unpacking libfontconfig1:amd64 (2.17.1-3ubuntu1) ...
Selecting previously unselected package libpixman-1-0:amd64.
Preparing to unpack .../066-libpixman-1-0_0.46.4-1_amd64.deb ...
Unpacking libpixman-1-0:amd64 (0.46.4-1) ...
Selecting previously unselected package libxcb-render0:amd64.
Preparing to unpack .../067-libxcb-render0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-render0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxcb-shm0:amd64.
Preparing to unpack .../068-libxcb-shm0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-shm0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxrender1:amd64.
Preparing to unpack .../069-libxrender1_1%3a0.9.12-1build1_amd64.deb ...
Unpacking libxrender1:amd64 (1:0.9.12-1build1) ...
Selecting previously unselected package libcairo2:amd64.
Preparing to unpack .../070-libcairo2_1.18.4-3_amd64.deb ...
Unpacking libcairo2:amd64 (1.18.4-3) ...
Selecting previously unselected package libsharpyuv0:amd64.
Preparing to unpack .../071-libsharpyuv0_1.5.0-0.1build1_amd64.deb ...
Unpacking libsharpyuv0:amd64 (1.5.0-0.1build1) ...
Selecting previously unselected package libaom3:amd64.
Preparing to unpack .../072-libaom3_3.13.1-2_amd64.deb ...
Unpacking libaom3:amd64 (3.13.1-2) ...
Selecting previously unselected package libheif-plugin-aomdec:amd64.
Preparing to unpack .../073-libheif-plugin-aomdec_1.21.2-3ubuntu0.3_amd64.deb ...
Unpacking libheif-plugin-aomdec:amd64 (1.21.2-3ubuntu0.3) ...
Selecting previously unselected package libheif1:amd64.
Preparing to unpack .../074-libheif1_1.21.2-3ubuntu0.3_amd64.deb ...
Unpacking libheif1:amd64 (1.21.2-3ubuntu0.3) ...
Selecting previously unselected package libhwy1t64:amd64.
Preparing to unpack .../075-libhwy1t64_1.3.0-2_amd64.deb ...
Unpacking libhwy1t64:amd64 (1.3.0-2) ...
Selecting previously unselected package liblcms2-2:amd64.
Preparing to unpack .../076-liblcms2-2_2.17-1ubuntu0.2_amd64.deb ...
Unpacking liblcms2-2:amd64 (2.17-1ubuntu0.2) ...
Selecting previously unselected package libjxl0.11:amd64.
Preparing to unpack .../077-libjxl0.11_0.11.1-6ubuntu4.2_amd64.deb ...
Unpacking libjxl0.11:amd64 (0.11.1-6ubuntu4.2) ...
Selecting previously unselected package libcairo-gobject2:amd64.
Preparing to unpack .../078-libcairo-gobject2_1.18.4-3_amd64.deb ...
Unpacking libcairo-gobject2:amd64 (1.18.4-3) ...
Selecting previously unselected package fontconfig.
Preparing to unpack .../079-fontconfig_2.17.1-3ubuntu1_amd64.deb ...
Unpacking fontconfig (2.17.1-3ubuntu1) ...
Selecting previously unselected package libgraphite2-3:amd64.
Preparing to unpack .../080-libgraphite2-3_1.3.14-11ubuntu1.1_amd64.deb ...
Unpacking libgraphite2-3:amd64 (1.3.14-11ubuntu1.1) ...
Selecting previously unselected package libharfbuzz0b:amd64.
Preparing to unpack .../081-libharfbuzz0b_12.3.2-2_amd64.deb ...
Unpacking libharfbuzz0b:amd64 (12.3.2-2) ...
Selecting previously unselected package libthai-data.
Preparing to unpack .../082-libthai-data_0.1.30-1_all.deb ...
Unpacking libthai-data (0.1.30-1) ...
Selecting previously unselected package libdatrie1:amd64.
Preparing to unpack .../083-libdatrie1_0.2.14-1_amd64.deb ...
Unpacking libdatrie1:amd64 (0.2.14-1) ...
Selecting previously unselected package libthai0:amd64.
Preparing to unpack .../084-libthai0_0.1.30-1_amd64.deb ...
Unpacking libthai0:amd64 (0.1.30-1) ...
Selecting previously unselected package libpango-1.0-0:amd64.
Preparing to unpack .../085-libpango-1.0-0_1.57.0-1_amd64.deb ...
Unpacking libpango-1.0-0:amd64 (1.57.0-1) ...
Selecting previously unselected package libpangoft2-1.0-0:amd64.
Preparing to unpack .../086-libpangoft2-1.0-0_1.57.0-1_amd64.deb ...
Unpacking libpangoft2-1.0-0:amd64 (1.57.0-1) ...
Selecting previously unselected package libpangocairo-1.0-0:amd64.
Preparing to unpack .../087-libpangocairo-1.0-0_1.57.0-1_amd64.deb ...
Unpacking libpangocairo-1.0-0:amd64 (1.57.0-1) ...
Selecting previously unselected package librsvg2-2:amd64.
Preparing to unpack .../088-librsvg2-2_2.61.3+dfsg-3_amd64.deb ...
Unpacking librsvg2-2:amd64 (2.61.3+dfsg-3) ...
Selecting previously unselected package glycin-loaders.
Preparing to unpack .../089-glycin-loaders_2.1.1+ds-0ubuntu1_amd64.deb ...
Unpacking glycin-loaders (2.1.1+ds-0ubuntu1) ...
Selecting previously unselected package libglycin-2-0:amd64.
Preparing to unpack .../090-libglycin-2-0_2.1.1+ds-0ubuntu1_amd64.deb ...
Unpacking libglycin-2-0:amd64 (2.1.1+ds-0ubuntu1) ...
Selecting previously unselected package glycin-thumbnailers.
Preparing to unpack .../091-glycin-thumbnailers_2.1.1+ds-0ubuntu1_amd64.deb ...
Unpacking glycin-thumbnailers (2.1.1+ds-0ubuntu1) ...
Selecting previously unselected package libgdk-pixbuf2.0-common.
Preparing to unpack .../092-libgdk-pixbuf2.0-common_2.44.5+dfsg-4ubuntu1_all.deb ...
Unpacking libgdk-pixbuf2.0-common (2.44.5+dfsg-4ubuntu1) ...
Selecting previously unselected package libgdk-pixbuf-2.0-0:amd64.
Preparing to unpack .../093-libgdk-pixbuf-2.0-0_2.44.5+dfsg-4ubuntu1_amd64.deb ...
Unpacking libgdk-pixbuf-2.0-0:amd64 (2.44.5+dfsg-4ubuntu1) ...
Selecting previously unselected package gtk-update-icon-cache.
Preparing to unpack .../094-gtk-update-icon-cache_4.22.4+ds-0ubuntu0.1_amd64.deb ...
No diversion 'diversion of /usr/sbin/update-icon-caches to /usr/sbin/update-icon-caches.gtk2 by libgtk-3-bin', none removed.
No diversion 'diversion of /usr/share/man/man8/update-icon-caches.8.gz to /usr/share/man/man8/update-icon-caches.gtk2.8.gz by libgtk-3-bin', none removed.
Unpacking gtk-update-icon-cache (4.22.4+ds-0ubuntu0.1) ...
Selecting previously unselected package hicolor-icon-theme.
Preparing to unpack .../095-hicolor-icon-theme_0.18-2build1_all.deb ...
Unpacking hicolor-icon-theme (0.18-2build1) ...
Selecting previously unselected package adwaita-icon-theme.
Preparing to unpack .../096-adwaita-icon-theme_50.0-1_all.deb ...
Unpacking adwaita-icon-theme (50.0-1) ...
Selecting previously unselected package alsa-topology-conf.
Preparing to unpack .../097-alsa-topology-conf_1.2.5.1-3build1_all.deb ...
Unpacking alsa-topology-conf (1.2.5.1-3build1) ...
Selecting previously unselected package libasound2-data.
Preparing to unpack .../098-libasound2-data_1.2.15.3-1ubuntu1.1_all.deb ...
Unpacking libasound2-data (1.2.15.3-1ubuntu1.1) ...
Selecting previously unselected package libasound2t64:amd64.
Preparing to unpack .../099-libasound2t64_1.2.15.3-1ubuntu1.1_amd64.deb ...
Unpacking libasound2t64:amd64 (1.2.15.3-1ubuntu1.1) ...
Selecting previously unselected package alsa-ucm-conf.
Preparing to unpack .../100-alsa-ucm-conf_1.2.15.3-1ubuntu1.4_all.deb ...
Unpacking alsa-ucm-conf (1.2.15.3-1ubuntu1.4) ...
Selecting previously unselected package at-spi2-common.
Preparing to unpack .../101-at-spi2-common_2.60.4-0ubuntu0.1_all.deb ...
Unpacking at-spi2-common (2.60.4-0ubuntu0.1) ...
Selecting previously unselected package libxi6:amd64.
Preparing to unpack .../102-libxi6_2%3a1.8.2-2_amd64.deb ...
Unpacking libxi6:amd64 (2:1.8.2-2) ...
Selecting previously unselected package libxres1:amd64.
Preparing to unpack .../103-libxres1_2%3a1.2.1-1build2_amd64.deb ...
Unpacking libxres1:amd64 (2:1.2.1-1build2) ...
Selecting previously unselected package libatspi2.0-0t64:amd64.
Preparing to unpack .../104-libatspi2.0-0t64_2.60.4-0ubuntu0.1_amd64.deb ...
Unpacking libatspi2.0-0t64:amd64 (2.60.4-0ubuntu0.1) ...
Selecting previously unselected package x11-common.
Preparing to unpack .../105-x11-common_1%3a7.7+26ubuntu1_all.deb ...
Unpacking x11-common (1:7.7+26ubuntu1) ...
Selecting previously unselected package libxtst6:amd64.
Preparing to unpack .../106-libxtst6_2%3a1.2.5-1build1_amd64.deb ...
Unpacking libxtst6:amd64 (2:1.2.5-1build1) ...
Selecting previously unselected package libdconf1:amd64.
Preparing to unpack .../107-libdconf1_0.49.0-4_amd64.deb ...
Unpacking libdconf1:amd64 (0.49.0-4) ...
Selecting previously unselected package dconf-service.
Preparing to unpack .../108-dconf-service_0.49.0-4_amd64.deb ...
Unpacking dconf-service (0.49.0-4) ...
Selecting previously unselected package dconf-gsettings-backend:amd64.
Preparing to unpack .../109-dconf-gsettings-backend_0.49.0-4_amd64.deb ...
Unpacking dconf-gsettings-backend:amd64 (0.49.0-4) ...
Selecting previously unselected package user-session-migration.
Preparing to unpack .../110-user-session-migration_0.5.1_amd64.deb ...
Unpacking user-session-migration (0.5.1) ...
Selecting previously unselected package gsettings-desktop-schemas.
Preparing to unpack .../111-gsettings-desktop-schemas_50.0-1ubuntu2_all.deb ...
Unpacking gsettings-desktop-schemas (50.0-1ubuntu2) ...
Selecting previously unselected package at-spi2-core.
Preparing to unpack .../112-at-spi2-core_2.60.4-0ubuntu0.1_amd64.deb ...
Unpacking at-spi2-core (2.60.4-0ubuntu0.1) ...
Selecting previously unselected package ca-certificates-java.
Preparing to unpack .../113-ca-certificates-java_20260311_all.deb ...
Unpacking ca-certificates-java (20260311) ...
Selecting previously unselected package fonts-dejavu-extra.
Preparing to unpack .../114-fonts-dejavu-extra_2.37-8build1_all.deb ...
Unpacking fonts-dejavu-extra (2.37-8build1) ...
Selecting previously unselected package libibus-1.0-5:amd64.
Preparing to unpack .../115-libibus-1.0-5_1.5.34~rc2-1_amd64.deb ...
Unpacking libibus-1.0-5:amd64 (1.5.34~rc2-1) ...
Selecting previously unselected package ibus-gtk3:amd64.
Preparing to unpack .../116-ibus-gtk3_1.5.34~rc2-1_amd64.deb ...
Unpacking ibus-gtk3:amd64 (1.5.34~rc2-1) ...
Selecting previously unselected package java-common.
Preparing to unpack .../117-java-common_0.77_all.deb ...
Unpacking java-common (0.77) ...
Selecting previously unselected package libatk1.0-0t64:amd64.
Preparing to unpack .../118-libatk1.0-0t64_2.60.4-0ubuntu0.1_amd64.deb ...
Unpacking libatk1.0-0t64:amd64 (2.60.4-0ubuntu0.1) ...
Selecting previously unselected package libatk-bridge2.0-0t64:amd64.
Preparing to unpack .../119-libatk-bridge2.0-0t64_2.60.4-0ubuntu0.1_amd64.deb ...
Unpacking libatk-bridge2.0-0t64:amd64 (2.60.4-0ubuntu0.1) ...
Selecting previously unselected package libglvnd0:amd64.
Preparing to unpack .../120-libglvnd0_1.7.0-3_amd64.deb ...
Unpacking libglvnd0:amd64 (1.7.0-3) ...
Selecting previously unselected package libdrm-amdgpu1:amd64.
Preparing to unpack .../121-libdrm-amdgpu1_2.4.131-1_amd64.deb ...
Unpacking libdrm-amdgpu1:amd64 (2.4.131-1) ...
Selecting previously unselected package libpciaccess0:amd64.
Preparing to unpack .../122-libpciaccess0_0.18.1-1ubuntu4_amd64.deb ...
Unpacking libpciaccess0:amd64 (0.18.1-1ubuntu4) ...
Selecting previously unselected package libdrm-intel1:amd64.
Preparing to unpack .../123-libdrm-intel1_2.4.131-1_amd64.deb ...
Unpacking libdrm-intel1:amd64 (2.4.131-1) ...
Selecting previously unselected package libllvm21:amd64.
Preparing to unpack .../124-libllvm21_1%3a21.1.8-6ubuntu1_amd64.deb ...
Unpacking libllvm21:amd64 (1:21.1.8-6ubuntu1) ...
Selecting previously unselected package libx11-xcb1:amd64.
Preparing to unpack .../125-libx11-xcb1_2%3a1.8.13-1_amd64.deb ...
Unpacking libx11-xcb1:amd64 (2:1.8.13-1) ...
Selecting previously unselected package libxcb-dri3-0:amd64.
Preparing to unpack .../126-libxcb-dri3-0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-dri3-0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxcb-present0:amd64.
Preparing to unpack .../127-libxcb-present0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-present0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxcb-randr0:amd64.
Preparing to unpack .../128-libxcb-randr0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-randr0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxcb-sync1:amd64.
Preparing to unpack .../129-libxcb-sync1_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-sync1:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxcb-xfixes0:amd64.
Preparing to unpack .../130-libxcb-xfixes0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-xfixes0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxshmfence1:amd64.
Preparing to unpack .../131-libxshmfence1_1.3.3-1build1_amd64.deb ...
Unpacking libxshmfence1:amd64 (1.3.3-1build1) ...
Selecting previously unselected package mesa-libgallium:amd64.
Preparing to unpack .../132-mesa-libgallium_26.0.3-1ubuntu1_amd64.deb ...
Unpacking mesa-libgallium:amd64 (26.0.3-1ubuntu1) ...
Selecting previously unselected package libgbm1:amd64.
Preparing to unpack .../133-libgbm1_26.0.3-1ubuntu1_amd64.deb ...
Unpacking libgbm1:amd64 (26.0.3-1ubuntu1) ...
Selecting previously unselected package libvulkan1:amd64.
Preparing to unpack .../134-libvulkan1_1.4.341.0-1_amd64.deb ...
Unpacking libvulkan1:amd64 (1.4.341.0-1) ...
Selecting previously unselected package libgl1-mesa-dri:amd64.
Preparing to unpack .../135-libgl1-mesa-dri_26.0.3-1ubuntu1_amd64.deb ...
Unpacking libgl1-mesa-dri:amd64 (26.0.3-1ubuntu1) ...
Selecting previously unselected package libxcb-glx0:amd64.
Preparing to unpack .../136-libxcb-glx0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-glx0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxxf86vm1:amd64.
Preparing to unpack .../137-libxxf86vm1_1%3a1.1.4-2_amd64.deb ...
Unpacking libxxf86vm1:amd64 (1:1.1.4-2) ...
Selecting previously unselected package libglx-mesa0:amd64.
Preparing to unpack .../138-libglx-mesa0_26.0.3-1ubuntu1_amd64.deb ...
Unpacking libglx-mesa0:amd64 (26.0.3-1ubuntu1) ...
Selecting previously unselected package libglx0:amd64.
Preparing to unpack .../139-libglx0_1.7.0-3_amd64.deb ...
Unpacking libglx0:amd64 (1.7.0-3) ...
Selecting previously unselected package libgl1:amd64.
Preparing to unpack .../140-libgl1_1.7.0-3_amd64.deb ...
Unpacking libgl1:amd64 (1.7.0-3) ...
Selecting previously unselected package libice6:amd64.
Preparing to unpack .../141-libice6_2%3a1.1.1-1build1_amd64.deb ...
Unpacking libice6:amd64 (2:1.1.1-1build1) ...
Selecting previously unselected package libsm6:amd64.
Preparing to unpack .../142-libsm6_2%3a1.2.6-1build1_amd64.deb ...
Unpacking libsm6:amd64 (2:1.2.6-1build1) ...
Selecting previously unselected package libxt6t64:amd64.
Preparing to unpack .../143-libxt6t64_1%3a1.2.1-1.3build1_amd64.deb ...
Unpacking libxt6t64:amd64 (1:1.2.1-1.3build1) ...
Selecting previously unselected package libxmu6:amd64.
Preparing to unpack .../144-libxmu6_2%3a1.1.3-4_amd64.deb ...
Unpacking libxmu6:amd64 (2:1.1.3-4) ...
Selecting previously unselected package libxpm4:amd64.
Preparing to unpack .../145-libxpm4_1%3a3.5.17-1build3_amd64.deb ...
Unpacking libxpm4:amd64 (1:3.5.17-1build3) ...
Selecting previously unselected package libxaw7:amd64.
Preparing to unpack .../146-libxaw7_2%3a1.0.16-1build1_amd64.deb ...
Unpacking libxaw7:amd64 (2:1.0.16-1build1) ...
Selecting previously unselected package libxcb-shape0:amd64.
Preparing to unpack .../147-libxcb-shape0_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb-shape0:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libxcomposite1:amd64.
Preparing to unpack .../148-libxcomposite1_1%3a0.4.6-1build1_amd64.deb ...
Unpacking libxcomposite1:amd64 (1:0.4.6-1build1) ...
Selecting previously unselected package libxft2:amd64.
Preparing to unpack .../149-libxft2_2.3.6-1build2_amd64.deb ...
Unpacking libxft2:amd64 (2.3.6-1build2) ...
Selecting previously unselected package libxinerama1:amd64.
Preparing to unpack .../150-libxinerama1_2%3a1.1.4-3build2_amd64.deb ...
Unpacking libxinerama1:amd64 (2:1.1.4-3build2) ...
Selecting previously unselected package libxkbfile1:amd64.
Preparing to unpack .../151-libxkbfile1_1%3a1.1.0-1build5_amd64.deb ...
Unpacking libxkbfile1:amd64 (1:1.1.0-1build5) ...
Selecting previously unselected package libxrandr2:amd64.
Preparing to unpack .../152-libxrandr2_2%3a1.5.4-1build1_amd64.deb ...
Unpacking libxrandr2:amd64 (2:1.5.4-1build1) ...
Selecting previously unselected package libxv1:amd64.
Preparing to unpack .../153-libxv1_2%3a1.0.13-1_amd64.deb ...
Unpacking libxv1:amd64 (2:1.0.13-1) ...
Selecting previously unselected package libxxf86dga1:amd64.
Preparing to unpack .../154-libxxf86dga1_2%3a1.1.5-1build2_amd64.deb ...
Unpacking libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Selecting previously unselected package x11-utils.
Preparing to unpack .../155-x11-utils_7.7+7build1_amd64.deb ...
Unpacking x11-utils (7.7+7build1) ...
Selecting previously unselected package libatk-wrapper-java.
Preparing to unpack .../156-libatk-wrapper-java_0.44.0-1_all.deb ...
Unpacking libatk-wrapper-java (0.44.0-1) ...
Selecting previously unselected package libatk-wrapper-java-jni:amd64.
Preparing to unpack .../157-libatk-wrapper-java-jni_0.44.0-1_amd64.deb ...
Unpacking libatk-wrapper-java-jni:amd64 (0.44.0-1) ...
Selecting previously unselected package libavahi-common-data:amd64.
Preparing to unpack .../158-libavahi-common-data_0.8-18ubuntu1.1_amd64.deb ...
Unpacking libavahi-common-data:amd64 (0.8-18ubuntu1.1) ...
Selecting previously unselected package libavahi-common3:amd64.
Preparing to unpack .../159-libavahi-common3_0.8-18ubuntu1.1_amd64.deb ...
Unpacking libavahi-common3:amd64 (0.8-18ubuntu1.1) ...
Selecting previously unselected package libavahi-client3:amd64.
Preparing to unpack .../160-libavahi-client3_0.8-18ubuntu1.1_amd64.deb ...
Unpacking libavahi-client3:amd64 (0.8-18ubuntu1.1) ...
Selecting previously unselected package libc-dev-bin.
Preparing to unpack .../161-libc-dev-bin_2.43-2ubuntu2_amd64.deb ...
Unpacking libc-dev-bin (2.43-2ubuntu2) ...
Selecting previously unselected package linux-libc-dev:amd64.
Preparing to unpack .../162-linux-libc-dev_7.0.0-28.28_amd64.deb ...
Unpacking linux-libc-dev:amd64 (7.0.0-28.28) ...
Selecting previously unselected package rpcsvc-proto.
Preparing to unpack .../163-rpcsvc-proto_1.4.3-1build1_amd64.deb ...
Unpacking rpcsvc-proto (1.4.3-1build1) ...
Selecting previously unselected package libc6-dev:amd64.
Preparing to unpack .../164-libc6-dev_2.43-2ubuntu2_amd64.deb ...
Unpacking libc6-dev:amd64 (2.43-2ubuntu2) ...
Selecting previously unselected package libcolord2:amd64.
Preparing to unpack .../165-libcolord2_1.4.8-3_amd64.deb ...
Unpacking libcolord2:amd64 (1.4.8-3) ...
Selecting previously unselected package libcups2t64:amd64.
Preparing to unpack .../166-libcups2t64_2.4.16-1ubuntu1.3_amd64.deb ...
Unpacking libcups2t64:amd64 (2.4.16-1ubuntu1.3) ...
Selecting previously unselected package libdisplay-info3:amd64.
Preparing to unpack .../167-libdisplay-info3_0.3.0-1_amd64.deb ...
Unpacking libdisplay-info3:amd64 (0.3.0-1) ...
Selecting previously unselected package libepoxy0:amd64.
Preparing to unpack .../168-libepoxy0_1.5.10-2build1_amd64.deb ...
Unpacking libepoxy0:amd64 (1.5.10-2build1) ...
Selecting previously unselected package libgif7:amd64.
Preparing to unpack .../169-libgif7_5.2.2-1ubuntu3_amd64.deb ...
Unpacking libgif7:amd64 (5.2.2-1ubuntu3) ...
Selecting previously unselected package libwayland-client0:amd64.
Preparing to unpack .../170-libwayland-client0_1.24.0-2_amd64.deb ...
Unpacking libwayland-client0:amd64 (1.24.0-2) ...
Selecting previously unselected package libwayland-cursor0:amd64.
Preparing to unpack .../171-libwayland-cursor0_1.24.0-2_amd64.deb ...
Unpacking libwayland-cursor0:amd64 (1.24.0-2) ...
Selecting previously unselected package libwayland-egl1:amd64.
Preparing to unpack .../172-libwayland-egl1_1.24.0-2_amd64.deb ...
Unpacking libwayland-egl1:amd64 (1.24.0-2) ...
Selecting previously unselected package libxfixes3:amd64.
Preparing to unpack .../173-libxfixes3_1%3a6.0.0-2build2_amd64.deb ...
Unpacking libxfixes3:amd64 (1:6.0.0-2build2) ...
Selecting previously unselected package libxcursor1:amd64.
Preparing to unpack .../174-libxcursor1_1%3a1.2.3-1build1_amd64.deb ...
Unpacking libxcursor1:amd64 (1:1.2.3-1build1) ...
Selecting previously unselected package libxdamage1:amd64.
Preparing to unpack .../175-libxdamage1_1%3a1.1.7-1_amd64.deb ...
Unpacking libxdamage1:amd64 (1:1.1.7-1) ...
Selecting previously unselected package libgtk-3-common.
Preparing to unpack .../176-libgtk-3-common_3.24.52-0ubuntu1_all.deb ...
Unpacking libgtk-3-common (3.24.52-0ubuntu1) ...
Selecting previously unselected package libgtk-3-0t64:amd64.
Preparing to unpack .../177-libgtk-3-0t64_3.24.52-0ubuntu1_amd64.deb ...
Unpacking libgtk-3-0t64:amd64 (3.24.52-0ubuntu1) ...
Selecting previously unselected package libgtk-3-bin.
Preparing to unpack .../178-libgtk-3-bin_3.24.52-0ubuntu1_amd64.deb ...
Unpacking libgtk-3-bin (3.24.52-0ubuntu1) ...
Selecting previously unselected package libheif-plugin-aomenc:amd64.
Preparing to unpack .../179-libheif-plugin-aomenc_1.21.2-3ubuntu0.3_amd64.deb ...
Unpacking libheif-plugin-aomenc:amd64 (1.21.2-3ubuntu0.3) ...
Selecting previously unselected package xorg-sgml-doctools.
Preparing to unpack .../180-xorg-sgml-doctools_1%3a1.11-1.1build1_all.deb ...
Unpacking xorg-sgml-doctools (1:1.11-1.1build1) ...
Selecting previously unselected package x11proto-dev.
Preparing to unpack .../181-x11proto-dev_2025.1-1_all.deb ...
Unpacking x11proto-dev (2025.1-1) ...
Selecting previously unselected package libice-dev:amd64.
Preparing to unpack .../182-libice-dev_2%3a1.1.1-1build1_amd64.deb ...
Unpacking libice-dev:amd64 (2:1.1.1-1build1) ...
Selecting previously unselected package libjpeg-turbo8:amd64.
Preparing to unpack .../183-libjpeg-turbo8_2.1.5-4ubuntu4_amd64.deb ...
Unpacking libjpeg-turbo8:amd64 (2.1.5-4ubuntu4) ...
Selecting previously unselected package libjpeg8:amd64.
Preparing to unpack .../184-libjpeg8_8c-2ubuntu12_amd64.deb ...
Unpacking libjpeg8:amd64 (8c-2ubuntu12) ...
Selecting previously unselected package libnspr4:amd64.
Preparing to unpack .../185-libnspr4_2%3a4.38.2-1ubuntu1_amd64.deb ...
Unpacking libnspr4:amd64 (2:4.38.2-1ubuntu1) ...
Selecting previously unselected package libnss3:amd64.
Preparing to unpack .../186-libnss3_2%3a3.120-1ubuntu2.1_amd64.deb ...
Unpacking libnss3:amd64 (2:3.120-1ubuntu2.1) ...
Selecting previously unselected package libpcsclite1:amd64.
Preparing to unpack .../187-libpcsclite1_2.4.1-1_amd64.deb ...
Unpacking libpcsclite1:amd64 (2.4.1-1) ...
Selecting previously unselected package librsvg2-common:amd64.
Preparing to unpack .../188-librsvg2-common_2.61.3+dfsg-3_amd64.deb ...
Unpacking librsvg2-common:amd64 (2.61.3+dfsg-3) ...
Selecting previously unselected package uuid-dev:amd64.
Preparing to unpack .../189-uuid-dev_2.41.3-3ubuntu2_amd64.deb ...
Unpacking uuid-dev:amd64 (2.41.3-3ubuntu2) ...
Selecting previously unselected package libsm-dev:amd64.
Preparing to unpack .../190-libsm-dev_2%3a1.2.6-1build1_amd64.deb ...
Unpacking libsm-dev:amd64 (2:1.2.6-1build1) ...
Selecting previously unselected package libxau-dev:amd64.
Preparing to unpack .../191-libxau-dev_1%3a1.0.11-1build2_amd64.deb ...
Unpacking libxau-dev:amd64 (1:1.0.11-1build2) ...
Selecting previously unselected package libxdmcp-dev:amd64.
Preparing to unpack .../192-libxdmcp-dev_1%3a1.1.5-2_amd64.deb ...
Unpacking libxdmcp-dev:amd64 (1:1.1.5-2) ...
Selecting previously unselected package xtrans-dev.
Preparing to unpack .../193-xtrans-dev_1.6.0-1build1_all.deb ...
Unpacking xtrans-dev (1.6.0-1build1) ...
Selecting previously unselected package libxcb1-dev:amd64.
Preparing to unpack .../194-libxcb1-dev_1.17.0-2ubuntu1_amd64.deb ...
Unpacking libxcb1-dev:amd64 (1.17.0-2ubuntu1) ...
Selecting previously unselected package libx11-dev:amd64.
Preparing to unpack .../195-libx11-dev_2%3a1.8.13-1_amd64.deb ...
Unpacking libx11-dev:amd64 (2:1.8.13-1) ...
Selecting previously unselected package libxt-dev:amd64.
Preparing to unpack .../196-libxt-dev_1%3a1.2.1-1.3build1_amd64.deb ...
Unpacking libxt-dev:amd64 (1:1.2.1-1.3build1) ...
Selecting previously unselected package luit.
Preparing to unpack .../197-luit_2.0.20250912-1_amd64.deb ...
Adding 'diversion of /usr/bin/luit to /usr/bin/luit.x11-utils by luit'
Adding 'diversion of /usr/share/man/man1/luit.1.gz to /usr/share/man/man1/luit.x11-utils.1.gz by luit'
Unpacking luit (2.0.20250912-1) ...
Selecting previously unselected package manpages-dev.
Preparing to unpack .../198-manpages-dev_6.17-1_all.deb ...
Unpacking manpages-dev (6.17-1) ...
Selecting previously unselected package mesa-vulkan-drivers:amd64.
Preparing to unpack .../199-mesa-vulkan-drivers_26.0.3-1ubuntu1_amd64.deb ...
Unpacking mesa-vulkan-drivers:amd64 (26.0.3-1ubuntu1) ...
Selecting previously unselected package openjdk-21-jre-headless:amd64.
Preparing to unpack .../200-openjdk-21-jre-headless_21.0.11+10-1~26.04.2_amd64.deb ...
Unpacking openjdk-21-jre-headless:amd64 (21.0.11+10-1~26.04.2) ...
Selecting previously unselected package openjdk-21-jre:amd64.
Preparing to unpack .../201-openjdk-21-jre_21.0.11+10-1~26.04.2_amd64.deb ...
Unpacking openjdk-21-jre:amd64 (21.0.11+10-1~26.04.2) ...
Selecting previously unselected package openjdk-21-jdk-headless:amd64.
Preparing to unpack .../202-openjdk-21-jdk-headless_21.0.11+10-1~26.04.2_amd64.deb ...
Unpacking openjdk-21-jdk-headless:amd64 (21.0.11+10-1~26.04.2) ...
Selecting previously unselected package openjdk-21-jdk:amd64.
Preparing to unpack .../203-openjdk-21-jdk_21.0.11+10-1~26.04.2_amd64.deb ...
Unpacking openjdk-21-jdk:amd64 (21.0.11+10-1~26.04.2) ...
Selecting previously unselected package systemd-timesyncd.
Preparing to unpack .../204-systemd-timesyncd_259.5-0ubuntu3_amd64.deb ...
Unpacking systemd-timesyncd (259.5-0ubuntu3) ...
Setting up libhwy1t64:amd64 (1.3.0-2) ...
Setting up media-types (14.0.0build1) ...
Setting up libgraphite2-3:amd64 (1.3.14-11ubuntu1.1) ...
Setting up liblcms2-2:amd64 (2.17-1ubuntu0.2) ...
Setting up libpixman-1-0:amd64 (0.46.4-1) ...
Setting up libsharpyuv0:amd64 (1.5.0-0.1build1) ...
Setting up libaom3:amd64 (3.13.1-2) ...
Setting up libpciaccess0:amd64 (0.18.1-1ubuntu4) ...
Setting up luit (2.0.20250912-1) ...
Setting up systemd-sysv (259.5-0ubuntu3) ...
Setting up libxau6:amd64 (1:1.0.11-1build2) ...
Setting up libxdmcp6:amd64 (1:1.1.5-2) ...
Setting up libkeyutils1:amd64 (1.6.3-6ubuntu3) ...
Setting up libapparmor1:amd64 (5.0.0~beta1-0ubuntu7) ...
Setting up libxcb1:amd64 (1.17.0-2ubuntu1) ...
Setting up libxcb-xfixes0:amd64 (1.17.0-2ubuntu1) ...
Setting up hicolor-icon-theme (0.18-2build1) ...
Setting up java-common (0.77) ...
Setting up libdatrie1:amd64 (0.2.14-1) ...
Setting up xdg-user-dirs (0.19-1) ...
Created symlink '/etc/systemd/user/graphical-session-pre.target.wants/xdg-user-dirs.service' → '/usr/lib/systemd/user/xdg-user-dirs.service'.
Setting up libxcb-render0:amd64 (1.17.0-2ubuntu1) ...
Setting up manpages (6.17-1) ...
Setting up libglvnd0:amd64 (1.7.0-3) ...
Setting up libxml2-16:amd64 (2.15.2+dfsg-0.1ubuntu0.1) ...
Setting up libdisplay-info3:amd64 (0.3.0-1) ...
Setting up libxcb-glx0:amd64 (1.17.0-2ubuntu1) ...
Setting up libbrotli1:amd64 (1.2.0-3build1) ...
Setting up libedit2:amd64 (3.1-20251016-1) ...
Setting up libsqlite3-0:amd64 (3.46.1-9ubuntu0.2) ...
Setting up libgdk-pixbuf2.0-common (2.44.5+dfsg-4ubuntu1) ...
Setting up libxcb-shape0:amd64 (1.17.0-2ubuntu1) ...
Setting up x11-common (1:7.7+26ubuntu1) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 79.)
debconf: falling back to frontend: Readline
debconf: unable to initialize frontend: Readline
debconf: (Can't locate Term/ReadLine.pm in @INC (you may need to install the Term::ReadLine module) (@INC entries checked: /etc/perl /usr/local/lib/x86_64-linux-gnu/perl/5.40.1 /usr/local/share/perl/5.40.1 /usr/lib/x86_64-linux-gnu/perl5/5.40 /usr/share/perl5 /usr/lib/x86_64-linux-gnu/perl-base /usr/lib/x86_64-linux-gnu/perl/5.40 /usr/share/perl/5.40 /usr/local/lib/site_perl) at /usr/share/perl5/Debconf/FrontEnd/Readline.pm line 8.)
debconf: falling back to frontend: Teletype
invoke-rc.d: could not determine current runlevel
invoke-rc.d: policy-rc.d denied execution of start.
Setting up libsensors-config (1:3.6.2-2build1) ...
Setting up linux-libc-dev:amd64 (7.0.0-28.28) ...
Setting up libnss-systemd:amd64 (259.5-0ubuntu3) ...
Setting up xkb-data (2.46-2) ...
Setting up krb5-locales (1.22.1-2ubuntu4) ...
Setting up libxcb-shm0:amd64 (1.17.0-2ubuntu1) ...
Setting up libcap2:amd64 (1:2.75-10ubuntu2) ...
Setting up libelf1t64:amd64 (0.194-4) ...
Setting up libkrb5support0:amd64 (1.22.1-2ubuntu4) ...
Setting up tzdata (2026b-0ubuntu0.26.04.1) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 79.)
debconf: falling back to frontend: Readline
debconf: unable to initialize frontend: Readline
debconf: (Can't locate Term/ReadLine.pm in @INC (you may need to install the Term::ReadLine module) (@INC entries checked: /etc/perl /usr/local/lib/x86_64-linux-gnu/perl/5.40.1 /usr/local/share/perl/5.40.1 /usr/lib/x86_64-linux-gnu/perl5/5.40 /usr/share/perl5 /usr/lib/x86_64-linux-gnu/perl-base /usr/lib/x86_64-linux-gnu/perl/5.40 /usr/share/perl/5.40 /usr/local/lib/site_perl) at /usr/share/perl5/Debconf/FrontEnd/Readline.pm line 8.)
debconf: falling back to frontend: Teletype

Current default time zone: 'Asia/Tokyo'
Local time is now:      Wed Jul 22 10:38:10 JST 2026.
Universal Time is now:  Wed Jul 22 01:38:10 UTC 2026.
Run 'dpkg-reconfigure tzdata' if you wish to change it.

Setting up libxcb-present0:amd64 (1.17.0-2ubuntu1) ...
Setting up libasound2-data (1.2.15.3-1ubuntu1.1) ...
Setting up xtrans-dev (1.6.0-1build1) ...
Setting up libnettle8t64:amd64 (3.10.2-1) ...
Setting up libglib2.0-data (2.88.0-1) ...
Setting up rpcsvc-proto (1.4.3-1build1) ...
Setting up linux-sysctl-defaults (4.15ubuntu5) ...
Setting up libasound2t64:amd64 (1.2.15.3-1ubuntu1.1) ...
Setting up libx11-data (2:1.8.13-1) ...
Setting up libepoxy0:amd64 (1.5.10-2build1) ...
Setting up libnspr4:amd64 (2:4.38.2-1ubuntu1) ...
Setting up libxcb-sync1:amd64 (1.17.0-2ubuntu1) ...
Setting up libavahi-common-data:amd64 (0.8-18ubuntu1.1) ...
Setting up libdbus-1-3:amd64 (1.16.2-2ubuntu4) ...
Setting up libfribidi0:amd64 (1.0.16-5) ...
Setting up libunistring5:amd64 (1.3-2build1) ...
Setting up fonts-dejavu-mono (2.37-8build1) ...
Setting up libpng16-16t64:amd64 (1.6.57-1) ...
Setting up systemd-timesyncd (259.5-0ubuntu3) ...
Creating group 'systemd-timesync' with GID 997.
Creating user 'systemd-timesync' (systemd Time Synchronization) with UID 997 and GID 997.
Created symlink '/etc/systemd/system/dbus-org.freedesktop.timesync1.service' → '/usr/lib/systemd/system/systemd-timesyncd.service'.
Created symlink '/etc/systemd/system/sysinit.target.wants/systemd-timesyncd.service' → '/usr/lib/systemd/system/systemd-timesyncd.service'.
Setting up libatomic1:amd64 (16-20260322-1ubuntu1) ...
Setting up fonts-dejavu-core (2.37-8build1) ...
Setting up libpcsclite1:amd64 (2.4.1-1) ...
Setting up libsensors5:amd64 (1:3.6.2-2build1) ...
Setting up libk5crypto3:amd64 (1.22.1-2ubuntu4) ...
Setting up libjpeg-turbo8:amd64 (2.1.5-4ubuntu4) ...
Setting up libvulkan1:amd64 (1.4.341.0-1) ...
Setting up libgif7:amd64 (5.2.2-1ubuntu3) ...
Setting up libffi8:amd64 (3.5.2-4) ...
Setting up libdevmapper1.02.1:amd64 (2:1.02.205-2ubuntu3) ...
Setting up fonts-dejavu-extra (2.37-8build1) ...
Setting up alsa-topology-conf (1.2.5.1-3build1) ...
Setting up libhogweed6t64:amd64 (3.10.2-1) ...
Setting up dmsetup (2:1.02.205-2ubuntu3) ...
Setting up libxshmfence1:amd64 (1.3.3-1build1) ...
Setting up at-spi2-common (2.60.4-0ubuntu0.1) ...
Setting up libxcb-randr0:amd64 (1.17.0-2ubuntu1) ...
Setting up dbus-session-bus-common (1.16.2-2ubuntu4) ...
Setting up libtasn1-6:amd64 (4.21.0-2) ...
Setting up libx11-6:amd64 (2:1.8.13-1) ...
Setting up libthai-data (0.1.30-1) ...
Setting up xorg-sgml-doctools (1:1.11-1.1build1) ...
Setting up netbase (6.5build1) ...
Setting up libkrb5-3:amd64 (1.22.1-2ubuntu4) ...
Setting up libwayland-egl1:amd64 (1.24.0-2) ...
Setting up libxkbfile1:amd64 (1:1.1.0-1build5) ...
Setting up dbus-system-bus-common (1.16.2-2ubuntu4) ...
Creating group 'messagebus' with GID 996.
Creating user 'messagebus' (System Message Bus) with UID 996 and GID 996.
Setting up libc-dev-bin (2.43-2ubuntu2) ...
Setting up openssl (3.5.5-1ubuntu3.2) ...
Setting up libdrm-common (2.4.131-1) ...
Setting up libxcomposite1:amd64 (1:0.4.6-1build1) ...
Setting up libjxl0.11:amd64 (0.11.1-6ubuntu4.2) ...
Setting up libjson-c5:amd64 (0.18+ds-3) ...
Setting up readline-common (8.3-4) ...
Setting up libxmuu1:amd64 (2:1.1.3-4) ...
Setting up dbus-bin (1.16.2-2ubuntu4) ...
Setting up libkmod2:amd64 (34.2-2ubuntu2) ...
Setting up libxkbcommon0:amd64 (1.13.1-1) ...
Setting up libwayland-client0:amd64 (1.24.0-2) ...
Setting up libjpeg8:amd64 (8c-2ubuntu12) ...
Setting up x11proto-dev (2025.1-1) ...
Setting up bubblewrap (0.11.1-1ubuntu0.1) ...
Setting up libxcb-dri3-0:amd64 (1.17.0-2ubuntu1) ...
Setting up manpages-dev (6.17-1) ...
Setting up libx11-xcb1:amd64 (2:1.8.13-1) ...
Setting up libice6:amd64 (2:1.1.1-1build1) ...
Setting up libxdamage1:amd64 (1:1.1.7-1) ...
Setting up libxau-dev:amd64 (1:1.0.11-1build2) ...
Setting up libxpm4:amd64 (1:3.5.17-1build3) ...
Setting up libxrender1:amd64 (1:0.9.12-1build1) ...
Setting up libice-dev:amd64 (2:1.1.1-1build1) ...
Setting up alsa-ucm-conf (1.2.15.3-1ubuntu1.4) ...
Setting up fontconfig-config (2.17.1-3ubuntu1) ...
Setting up libavahi-common3:amd64 (0.8-18ubuntu1.1) ...
Setting up libxext6:amd64 (2:1.3.4-1build3) ...
Setting up libidn2-0:amd64 (2.3.8-4build1) ...
Setting up libnss3:amd64 (2:3.120-1ubuntu2.1) ...
Setting up dbus-daemon (1.16.2-2ubuntu4) ...
Setting up libxxf86vm1:amd64 (1:1.1.4-2) ...
Setting up libthai0:amd64 (0.1.30-1) ...
Setting up ca-certificates (20260601~26.04.1) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 79.)
debconf: falling back to frontend: Readline
debconf: unable to initialize frontend: Readline
debconf: (Can't locate Term/ReadLine.pm in @INC (you may need to install the Term::ReadLine module) (@INC entries checked: /etc/perl /usr/local/lib/x86_64-linux-gnu/perl/5.40.1 /usr/local/share/perl/5.40.1 /usr/lib/x86_64-linux-gnu/perl5/5.40 /usr/share/perl5 /usr/lib/x86_64-linux-gnu/perl-base /usr/lib/x86_64-linux-gnu/perl/5.40 /usr/share/perl/5.40 /usr/local/lib/site_perl) at /usr/share/perl5/Debconf/FrontEnd/Readline.pm line 8.)
debconf: falling back to frontend: Teletype
Updating certificates in /etc/ssl/certs...
121 added, 0 removed; done.
Setting up libxdmcp-dev:amd64 (1:1.1.5-2) ...
Setting up libglib2.0-0t64:amd64 (2.88.0-1) ...
Setting up libfreetype6:amd64 (2.14.2+dfsg-1ubuntu0.1) ...
Setting up libxfixes3:amd64 (1:6.0.0-2build2) ...
Setting up libllvm21:amd64 (1:21.1.8-6ubuntu1) ...
Setting up dbus (1.16.2-2ubuntu4) ...
Setting up shared-mime-info (2.4-5build3) ...
Setting up libp11-kit0:amd64 (0.26.2-2) ...
Setting up libxinerama1:amd64 (2:1.1.4-3build2) ...
Setting up libxv1:amd64 (2:1.0.13-1) ...
Setting up libgssapi-krb5-2:amd64 (1.22.1-2ubuntu4) ...
Setting up libxrandr2:amd64 (2:1.5.4-1build1) ...
Setting up libreadline8t64:amd64 (8.3-4) ...
Setting up libdrm2:amd64 (2.4.131-1) ...
Setting up libwayland-cursor0:amd64 (1.24.0-2) ...
Setting up libpam-systemd:amd64 (259.5-0ubuntu3) ...
debconf: unable to initialize frontend: Dialog
debconf: (No usable dialog-like program is installed, so the dialog based frontend cannot be used. at /usr/share/perl5/Debconf/FrontEnd/Dialog.pm line 79.)
debconf: falling back to frontend: Readline
debconf: unable to initialize frontend: Readline
debconf: (Can't locate Term/ReadLine.pm in @INC (you may need to install the Term::ReadLine module) (@INC entries checked: /etc/perl /usr/local/lib/x86_64-linux-gnu/perl/5.40.1 /usr/local/share/perl/5.40.1 /usr/lib/x86_64-linux-gnu/perl5/5.40 /usr/share/perl5 /usr/lib/x86_64-linux-gnu/perl-base /usr/lib/x86_64-linux-gnu/perl/5.40 /usr/share/perl/5.40 /usr/local/lib/site_perl) at /usr/share/perl5/Debconf/FrontEnd/Readline.pm line 8.)
debconf: falling back to frontend: Teletype
Setting up libc6-dev:amd64 (2.43-2ubuntu2) ...
Setting up libharfbuzz0b:amd64 (12.3.2-2) ...
Setting up libcryptsetup12:amd64 (2:2.8.4-1ubuntu4) ...
Setting up libfontconfig1:amd64 (2.17.1-3ubuntu1) ...
Setting up ca-certificates-java (20260311) ...
No JRE found. Skipping Java certificates setup.
Setting up libsm6:amd64 (2:1.2.6-1build1) ...
Setting up libavahi-client3:amd64 (0.8-18ubuntu1.1) ...
Setting up libxres1:amd64 (2:1.2.1-1build2) ...
Setting up systemd-resolved (259.5-0ubuntu3) ...
Converting /etc/resolv.conf to a symlink to /run/systemd/resolve/stub-resolv.conf...
mv: cannot move '/etc/resolv.conf' to '/etc/.resolv.conf.systemd-resolved.bak': Device or resource busy
Cannot take a backup of /etc/resolv.conf.
ln: Already exists
Cannot install symlink from /etc/resolv.conf to ../run/systemd/resolve/stub-resolv.conf
Creating group 'systemd-resolve' with GID 995.
Creating user 'systemd-resolve' (systemd Resolver) with UID 995 and GID 995.
Created symlink '/etc/systemd/system/dbus-org.freedesktop.resolve1.service' → '/usr/lib/systemd/system/systemd-resolved.service'.
Created symlink '/etc/systemd/system/sysinit.target.wants/systemd-resolved.service' → '/usr/lib/systemd/system/systemd-resolved.service'.
Created symlink '/etc/systemd/system/sockets.target.wants/systemd-resolved-varlink.socket' → '/usr/lib/systemd/system/systemd-resolved-varlink.socket'.
Created symlink '/etc/systemd/system/sockets.target.wants/systemd-resolved-monitor.socket' → '/usr/lib/systemd/system/systemd-resolved-monitor.socket'.
Setting up libdrm-amdgpu1:amd64 (2.4.131-1) ...
Setting up libgnutls30t64:amd64 (3.8.12-2ubuntu1.1) ...
Setting up mesa-vulkan-drivers:amd64 (26.0.3-1ubuntu1) ...
Setting up fontconfig (2.17.1-3ubuntu1) ...
Regenerating fonts cache... done.
Setting up libxft2:amd64 (2.3.6-1build2) ...
Setting up libxcb1-dev:amd64 (1.17.0-2ubuntu1) ...
Setting up libatk1.0-0t64:amd64 (2.60.4-0ubuntu0.1) ...
Setting up user-session-migration (0.5.1) ...
Created symlink '/etc/systemd/user/graphical-session-pre.target.wants/user-session-migration.service' → '/usr/lib/systemd/user/user-session-migration.service'.
Setting up openjdk-21-jre-headless:amd64 (21.0.11+10-1~26.04.2) ...
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/java to provide /usr/bin/java (java) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jpackage to provide /usr/bin/jpackage (jpackage) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/keytool to provide /usr/bin/keytool (keytool) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/rmiregistry to provide /usr/bin/rmiregistry (rmiregistry) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/lib/jexec to provide /usr/bin/jexec (jexec) in auto mode
Setting up libxi6:amd64 (2:1.8.2-2) ...
Setting up libpython3.14-stdlib:amd64 (3.14.4-1ubuntu0.1) ...
Setting up libxtst6:amd64 (2:1.2.5-1build1) ...
Setting up libxcursor1:amd64 (1:1.2.3-1build1) ...
Setting up libpango-1.0-0:amd64 (1.57.0-1) ...
Setting up libdrm-intel1:amd64 (2.4.131-1) ...
Setting up libibus-1.0-5:amd64 (1.5.34~rc2-1) ...
Setting up libxxf86dga1:amd64 (2:1.1.5-1build2) ...
Setting up libx11-dev:amd64 (2:1.8.13-1) ...
Setting up libcairo2:amd64 (1.18.4-3) ...
Setting up libcolord2:amd64 (1.4.8-3) ...
Setting up libdconf1:amd64 (0.49.0-4) ...
Setting up dbus-user-session (1.16.2-2ubuntu4) ...
Setting up systemd-cryptsetup (259.5-0ubuntu3) ...
Setting up uuid-dev:amd64 (2.41.3-3ubuntu2) ...
Setting up libatspi2.0-0t64:amd64 (2.60.4-0ubuntu0.1) ...
Setting up libxt6t64:amd64 (1:1.2.1-1.3build1) ...
Setting up libcairo-gobject2:amd64 (1.18.4-3) ...
Setting up python3.14 (3.14.4-1ubuntu0.1) ...
Setting up libpangoft2-1.0-0:amd64 (1.57.0-1) ...
Setting up ibus-gtk3:amd64 (1.5.34~rc2-1) ...
Setting up libcups2t64:amd64 (2.4.16-1ubuntu1.3) ...
Setting up libpangocairo-1.0-0:amd64 (1.57.0-1) ...
Setting up libpython3-stdlib:amd64 (3.14.3-0ubuntu2) ...
Setting up libatk-bridge2.0-0t64:amd64 (2.60.4-0ubuntu0.1) ...
Setting up mesa-libgallium:amd64 (26.0.3-1ubuntu1) ...
Setting up libxmu6:amd64 (2:1.1.3-4) ...
Setting up libgbm1:amd64 (26.0.3-1ubuntu1) ...
Setting up libsm-dev:amd64 (2:1.2.6-1build1) ...
Setting up libgl1-mesa-dri:amd64 (26.0.3-1ubuntu1) ...
Setting up dconf-service (0.49.0-4) ...
Setting up python3 (3.14.3-0ubuntu2) ...
running python rtupdate hooks for python3.14...
running python post-rtupdate hooks for python3.14...
Setting up libxaw7:amd64 (2:1.0.16-1build1) ...
Setting up libxt-dev:amd64 (1:1.2.1-1.3build1) ...
Setting up libglx-mesa0:amd64 (26.0.3-1ubuntu1) ...
Setting up libglx0:amd64 (1.7.0-3) ...
Setting up dconf-gsettings-backend:amd64 (0.49.0-4) ...
Setting up libgl1:amd64 (1.7.0-3) ...
Setting up x11-utils (7.7+7build1) ...
Setting up libatk-wrapper-java (0.44.0-1) ...
Setting up libgtk-3-common (3.24.52-0ubuntu1) ...
Setting up gsettings-desktop-schemas (50.0-1ubuntu2) ...
Setting up libatk-wrapper-java-jni:amd64 (0.44.0-1) ...
Setting up at-spi2-core (2.60.4-0ubuntu0.1) ...
Setting up libheif-plugin-aomdec:amd64 (1.21.2-3ubuntu0.3) ...
Setting up libheif1:amd64 (1.21.2-3ubuntu0.3) ...
Setting up librsvg2-2:amd64 (2.61.3+dfsg-3) ...
Setting up glycin-loaders (2.1.1+ds-0ubuntu1) ...
Setting up libglycin-2-0:amd64 (2.1.1+ds-0ubuntu1) ...
Setting up libheif-plugin-aomenc:amd64 (1.21.2-3ubuntu0.3) ...
Setting up glycin-thumbnailers (2.1.1+ds-0ubuntu1) ...
Setting up libgdk-pixbuf-2.0-0:amd64 (2.44.5+dfsg-4ubuntu1) ...
Setting up gtk-update-icon-cache (4.22.4+ds-0ubuntu0.1) ...
Setting up adwaita-icon-theme (50.0-1) ...
update-alternatives: using /usr/share/icons/Adwaita/cursor.theme to provide /usr/share/icons/default/index.theme (x-cursor-theme) in auto mode
Setting up libgtk-3-0t64:amd64 (3.24.52-0ubuntu1) ...
Setting up librsvg2-common:amd64 (2.61.3+dfsg-3) ...
Setting up libgtk-3-bin (3.24.52-0ubuntu1) ...
Processing triggers for systemd (259.5-0ubuntu3) ...
Processing triggers for procps (2:4.0.4-9ubuntu1) ...
procps: Applying updated sysctl configuration
sysctl: setting key "kernel.core_pattern", ignoring: Read-only file system
sysctl: setting key "kernel.sysrq", ignoring: Read-only file system
sysctl: setting key "kernel.core_uses_pid", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.default.rp_filter", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.eth0.rp_filter", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.lo.rp_filter", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.default.accept_source_route", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.eth0.accept_source_route", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.lo.accept_source_route", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.default.promote_secondaries", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.eth0.promote_secondaries", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.lo.promote_secondaries", ignoring: Read-only file system
sysctl: setting key "net.ipv4.ping_group_range", ignoring: Read-only file system
sysctl: setting key "fs.protected_hardlinks", ignoring: Read-only file system
sysctl: setting key "fs.protected_symlinks", ignoring: Read-only file system
sysctl: setting key "fs.protected_regular", ignoring: Read-only file system
sysctl: setting key "fs.protected_fifos", ignoring: Read-only file system
sysctl: setting key "vm.max_map_count", ignoring: Read-only file system
sysctl: setting key "kernel.pid_max", ignoring: Read-only file system
sysctl: setting key "kernel.printk", ignoring: Read-only file system
sysctl: setting key "net.ipv6.conf.all.use_tempaddr", ignoring: Read-only file system
sysctl: setting key "net.ipv6.conf.default.use_tempaddr", ignoring: Read-only file system
sysctl: setting key "kernel.kptr_restrict", ignoring: Read-only file system
sysctl: setting key "kernel.sysrq", ignoring: Read-only file system
sysctl: setting key "vm.max_map_count", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.default.rp_filter", ignoring: Read-only file system
sysctl: setting key "net.ipv4.conf.all.rp_filter", ignoring: Read-only file system
sysctl: setting key "kernel.yama.ptrace_scope", ignoring: Read-only file system
sysctl: setting key "vm.mmap_min_addr", ignoring: Read-only file system
Processing triggers for libc-bin (2.43-2ubuntu2) ...
Processing triggers for ca-certificates-java (20260311) ...
Adding debian:ACCVRAIZ1.pem
Adding debian:AC_RAIZ_FNMT-RCM.pem
Adding debian:AC_RAIZ_FNMT-RCM_SERVIDORES_SEGUROS.pem
Adding debian:ANF_Secure_Server_Root_CA.pem
Adding debian:Actalis_Authentication_Root_CA.pem
Adding debian:Amazon_Root_CA_1.pem
Adding debian:Amazon_Root_CA_2.pem
Adding debian:Amazon_Root_CA_3.pem
Adding debian:Amazon_Root_CA_4.pem
Adding debian:Atos_TrustedRoot_2011.pem
Adding debian:Atos_TrustedRoot_Root_CA_ECC_TLS_2021.pem
Adding debian:Atos_TrustedRoot_Root_CA_RSA_TLS_2021.pem
Adding debian:Autoridad_de_Certificacion_Firmaprofesional_CIF_A62634068.pem
Adding debian:BJCA_Global_Root_CA1.pem
Adding debian:BJCA_Global_Root_CA2.pem
Adding debian:Buypass_Class_2_Root_CA.pem
Adding debian:Buypass_Class_3_Root_CA.pem
Adding debian:CA_Disig_Root_R2.pem
Adding debian:CFCA_EV_ROOT.pem
Adding debian:COMODO_ECC_Certification_Authority.pem
Adding debian:COMODO_RSA_Certification_Authority.pem
Adding debian:Certainly_Root_E1.pem
Adding debian:Certainly_Root_R1.pem
Adding debian:Certigna_Root_CA.pem
Adding debian:Certum_EC-384_CA.pem
Adding debian:Certum_Trusted_Network_CA.pem
Adding debian:Certum_Trusted_Network_CA_2.pem
Adding debian:Certum_Trusted_Root_CA.pem
Adding debian:D-TRUST_BR_Root_CA_1_2020.pem
Adding debian:D-TRUST_BR_Root_CA_2_2023.pem
Adding debian:D-TRUST_EV_Root_CA_1_2020.pem
Adding debian:D-TRUST_EV_Root_CA_2_2023.pem
Adding debian:D-TRUST_Root_Class_3_CA_2_2009.pem
Adding debian:D-TRUST_Root_Class_3_CA_2_EV_2009.pem
Adding debian:DigiCert_Assured_ID_Root_G2.pem
Adding debian:DigiCert_Assured_ID_Root_G3.pem
Adding debian:DigiCert_Global_Root_G2.pem
Adding debian:DigiCert_Global_Root_G3.pem
Adding debian:DigiCert_TLS_ECC_P384_Root_G5.pem
Adding debian:DigiCert_TLS_RSA4096_Root_G5.pem
Adding debian:DigiCert_Trusted_Root_G4.pem
Adding debian:Entrust_Root_Certification_Authority.pem
Adding debian:GDCA_TrustAUTH_R5_ROOT.pem
Adding debian:GTS_Root_R1.pem
Adding debian:GTS_Root_R3.pem
Adding debian:GTS_Root_R4.pem
Adding debian:GlobalSign_ECC_Root_CA_-_R4.pem
Adding debian:GlobalSign_ECC_Root_CA_-_R5.pem
Adding debian:GlobalSign_Root_CA_-_R3.pem
Adding debian:GlobalSign_Root_CA_-_R6.pem
Adding debian:GlobalSign_Root_E46.pem
Adding debian:GlobalSign_Root_R46.pem
Adding debian:Go_Daddy_Root_Certificate_Authority_-_G2.pem
Adding debian:HARICA_TLS_ECC_Root_CA_2021.pem
Adding debian:HARICA_TLS_RSA_Root_CA_2021.pem
Adding debian:Hellenic_Academic_and_Research_Institutions_ECC_RootCA_2015.pem
Adding debian:Hellenic_Academic_and_Research_Institutions_RootCA_2015.pem
Adding debian:HiPKI_Root_CA_-_G1.pem
Adding debian:Hongkong_Post_Root_CA_3.pem
Adding debian:ISRG_Root_X1.pem
Adding debian:ISRG_Root_X2.pem
Adding debian:IdenTrust_Commercial_Root_CA_1.pem
Adding debian:IdenTrust_Public_Sector_Root_CA_1.pem
Adding debian:Izenpe.com.pem
Adding debian:Microsec_e-Szigno_Root_CA_2009.pem
Adding debian:Microsoft_ECC_Root_Certificate_Authority_2017.pem
Adding debian:Microsoft_RSA_Root_Certificate_Authority_2017.pem
Adding debian:NAVER_Global_Root_Certification_Authority.pem
Adding debian:NetLock_Arany_=Class_Gold=_Főtanúsítvány.pem
Adding debian:OISTE_Server_Root_ECC_G1.pem
Adding debian:OISTE_Server_Root_RSA_G1.pem
Adding debian:OISTE_WISeKey_Global_Root_GB_CA.pem
Adding debian:OISTE_WISeKey_Global_Root_GC_CA.pem
Adding debian:QuoVadis_Root_CA_1_G3.pem
Adding debian:QuoVadis_Root_CA_2_G3.pem
Adding debian:QuoVadis_Root_CA_3_G3.pem
Adding debian:SSL.com_EV_Root_Certification_Authority_ECC.pem
Adding debian:SSL.com_EV_Root_Certification_Authority_RSA_R2.pem
Adding debian:SSL.com_Root_Certification_Authority_ECC.pem
Adding debian:SSL.com_Root_Certification_Authority_RSA.pem
Adding debian:SSL.com_TLS_ECC_Root_CA_2022.pem
Adding debian:SSL.com_TLS_RSA_Root_CA_2022.pem
Adding debian:SZAFIR_ROOT_CA2.pem
Adding debian:Sectigo_Public_Server_Authentication_Root_E46.pem
Adding debian:Sectigo_Public_Server_Authentication_Root_R46.pem
Adding debian:SecureSign_Root_CA12.pem
Adding debian:SecureSign_Root_CA14.pem
Adding debian:SecureSign_Root_CA15.pem
Adding debian:Security_Communication_ECC_RootCA1.pem
Adding debian:Security_Communication_RootCA2.pem
Adding debian:Starfield_Root_Certificate_Authority_-_G2.pem
Adding debian:Starfield_Services_Root_Certificate_Authority_-_G2.pem
Adding debian:SwissSign_RSA_TLS_Root_CA_2022_-_1.pem
Adding debian:T-TeleSec_GlobalRoot_Class_2.pem
Adding debian:T-TeleSec_GlobalRoot_Class_3.pem
Adding debian:TUBITAK_Kamu_SM_SSL_Kok_Sertifikasi_-_Surum_1.pem
Adding debian:TWCA_CYBER_Root_CA.pem
Adding debian:TWCA_Global_Root_CA.pem
Adding debian:TWCA_Root_Certification_Authority.pem
Adding debian:Telekom_Security_TLS_ECC_Root_2020.pem
Adding debian:Telekom_Security_TLS_RSA_Root_2023.pem
Adding debian:Telia_Root_CA_v2.pem
Adding debian:TrustAsia_Global_Root_CA_G3.pem
Adding debian:TrustAsia_Global_Root_CA_G4.pem
Adding debian:TrustAsia_TLS_ECC_Root_CA.pem
Adding debian:TrustAsia_TLS_RSA_Root_CA.pem
Adding debian:TunTrust_Root_CA.pem
Adding debian:UCA_Extended_Validation_Root.pem
Adding debian:UCA_Global_G2_Root.pem
Adding debian:USERTrust_ECC_Certification_Authority.pem
Adding debian:USERTrust_RSA_Certification_Authority.pem
Adding debian:certSIGN_Root_CA_G2.pem
Adding debian:e-Szigno_Root_CA_2017.pem
Adding debian:e-Szigno_TLS_Root_CA_2023.pem
Adding debian:ePKI_Root_Certification_Authority.pem
Adding debian:emSign_ECC_Root_CA_-_C3.pem
Adding debian:emSign_ECC_Root_CA_-_G3.pem
Adding debian:emSign_Root_CA_-_C1.pem
Adding debian:emSign_Root_CA_-_G1.pem
Adding debian:vTrus_ECC_Root_CA.pem
Adding debian:vTrus_Root_CA.pem
done.
Setting up openjdk-21-jre:amd64 (21.0.11+10-1~26.04.2) ...
Setting up openjdk-21-jdk-headless:amd64 (21.0.11+10-1~26.04.2) ...
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jar to provide /usr/bin/jar (jar) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jarsigner to provide /usr/bin/jarsigner (jarsigner) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/javac to provide /usr/bin/javac (javac) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/javadoc to provide /usr/bin/javadoc (javadoc) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/javap to provide /usr/bin/javap (javap) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jcmd to provide /usr/bin/jcmd (jcmd) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jdb to provide /usr/bin/jdb (jdb) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jdeprscan to provide /usr/bin/jdeprscan (jdeprscan) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jdeps to provide /usr/bin/jdeps (jdeps) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jfr to provide /usr/bin/jfr (jfr) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jimage to provide /usr/bin/jimage (jimage) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jinfo to provide /usr/bin/jinfo (jinfo) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jlink to provide /usr/bin/jlink (jlink) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jmap to provide /usr/bin/jmap (jmap) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jmod to provide /usr/bin/jmod (jmod) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jps to provide /usr/bin/jps (jps) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jrunscript to provide /usr/bin/jrunscript (jrunscript) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jshell to provide /usr/bin/jshell (jshell) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jstack to provide /usr/bin/jstack (jstack) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jstat to provide /usr/bin/jstat (jstat) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jstatd to provide /usr/bin/jstatd (jstatd) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jwebserver to provide /usr/bin/jwebserver (jwebserver) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/serialver to provide /usr/bin/serialver (serialver) in auto mode
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jhsdb to provide /usr/bin/jhsdb (jhsdb) in auto mode
Setting up openjdk-21-jdk:amd64 (21.0.11+10-1~26.04.2) ...
update-alternatives: using /usr/lib/jvm/java-21-openjdk-amd64/bin/jconsole to provide /usr/bin/jconsole (jconsole) in auto mode
Processing triggers for ca-certificates (20260601~26.04.1) ...
Updating certificates in /etc/ssl/certs...
0 added, 0 removed; done.
Running hooks in /etc/ca-certificates/update.d...
done.
Processing triggers for libgdk-pixbuf-2.0-0:amd64 (2.44.5+dfsg-4ubuntu1) ...
Processing triggers for ca-certificates-java (20260311) ...
done.
