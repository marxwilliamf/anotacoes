Servlets

	response.sendRedirect("index2.jsp");	

Servlet
		Servlet - Init, destroy, getServletConfig, getServletInfo, Service. //Todos os servlets abaixo implementam esses métodos.
			GenericServlet
				HttpServlet
						MyServlet








JSP

	Antes do <!DOCTYPE html>
		<%@page contentType="text/html" pageEncoding="UTF-8" %>

	dentro do <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">


		<%@ include file="cabecalho.jsp"%>
		<jsp:include page="arquivotxt.txt"></jsp:include>
		<jsp:include page="Rodape.jsp"></jsp:include>

	Redirecionar
		<jsp:forward page="home.jsp"/>

	Anotações
		<!-- comentario visivel no código enviado ao navegador do usuário -->
		<%-- comentário em jsp não enviado ao navegador --%> idem <%/* comentario 	 */%>

	Import
		<%@page import="java.util.ArrayList"%>
		<%@ page import="br.com.caelum.agenda.dao.ContatoDao" %>

		<%@ page import="java.util.*,
		    br.com.caelum.agenda.dao.*,
		    br.com.caelum.agenda.modelo.*" %>

	Scriptlets
	
		<%
			String mensagem = "Bem vindo!";
		%>

		<% out.println(mensagem); %>

		<%= mensagem %>

	web.xml
	
		<welcome-file-list>
	   	    <welcome-file>index.jsp</welcome-file>
		</welcome-file-list>

	Expression Language
		é interpretada pelo servlet container.

		Nome é: ${param.nome} <br />     
		Endereço é: ${param.endereco}<br />
		Versão é: ${param.versao}<br />
		Músicas: ${paramValues.musicas[0]}

		Nome é: ${requestScope.nome}<br />
		Endereço é: ${sessionScope.endereco}<br />
		Versão é: ${applicationScope.versao}<br />
	
		Nome é: ${requestScope['nome']}<br />
		Endereço é: ${sessionScope['endereco']}<br />
		Versão é: ${applicationScope['versao']}<br />

		Nome é: ${param['nome']} <br />     
		Endereço é: ${param['endereco']}<br />
		Versão é: ${param['versao']} <br />
		Músicas: ${empty paramValues.musicas}<br />
		Músicas: ${empty paramValues.musicas ? 'Nenhuma música foi selecionada' : 
			paramValues.musicas[0]}<br />


	<%= request.getParameter("myParam")%>
	
	
web.xml

	<?xml version="1.0" encoding="UTF-8"?>
	<web-app version="3.1" xmlns="http://xmlns.jcp.org/xml/ns/javaee" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://xmlns.jcp.org/xml/ns/javaee http://xmlns.jcp.org/xml/ns/javaee/web-app_3_1.xsd">
		<session-config>
			<session-timeout>
				30
			</session-timeout>
		</session-config>
		<welcome-file-list>
			<welcome-file>home.jsp</welcome-file>
		</welcome-file-list>
		<error-page>
			<exception-type>java.lang.NullPointerException</exception-type>
			<location>/NPEPage.jsp</location>
		</error-page>
		<error-page>
			<exception-type>java.lang.NumberFormatException</exception-type>
			<location>/InvalidNumber.jsp</location>
		</error-page>
	</web-app>

	
Bean
	Example
		<%@page contentType="text/html" pageEncoding="UTF-8" import="example.*"%>

		<jsp:useBean class="example.MyClass" id="myBean" scope="session"/>
		<jsp:setProperty name="myBean.member" property="*" />


			<%
				out.print("The name is: " + myBean.getMember().getName() + " And the age is " + myBean.getMember().getAge());        
			%>




Desing Paterns
	GOF 23
	DAO
	BO
	DTO

