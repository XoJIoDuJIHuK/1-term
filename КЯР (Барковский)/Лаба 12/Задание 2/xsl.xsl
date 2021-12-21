<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>Задание 2</title>
</head>
<body>
<table border="1">
<tr><th colspan="9">Аттестация</th></tr>
<tr bgcolor="lightblue">
<th>Студент</th>
<th>Бел. яз.</th>
<th>Матан</th>
<th>Линал</th>
<th>Физра</th>
<th>ОПИ</th>
<th>ОАиП</th>
<th>КЯР</th>
<th>Англ. яз.</th>
</tr>
<xsl:for-each select="fac/spec">
<xsl:sort select="stud"/>
<tr>
<td bgcolor="#EEAEEE"><xsl:value-of select="stud"/></td>
<xsl:choose>
<xsl:when test="bel &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="bel"/></td>
</xsl:when>
<xsl:when test="bel &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="bel"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="bel"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="mat &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="mat"/></td>
</xsl:when>
<xsl:when test="mat &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="mat"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="mat"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="lin &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="lin"/></td>
</xsl:when>
<xsl:when test="lin &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="lin"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="lin"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="fiz &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="fiz"/></td>
</xsl:when>
<xsl:when test="fiz &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="fiz"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="fiz"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="opi &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="opi"/></td>
</xsl:when>
<xsl:when test="opi &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="opi"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="opi"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="oaip &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="oaip"/></td>
</xsl:when>
<xsl:when test="oaip &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="oaip"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="oaip"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="k9r &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="k9r"/></td>
</xsl:when>
<xsl:when test="k9r &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="k9r"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="k9r"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="eng &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="eng"/></td>
</xsl:when>
<xsl:when test="eng &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="eng"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="eng"/></td>
</xsl:otherwise>
</xsl:choose>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>