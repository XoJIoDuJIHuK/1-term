<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<head><title>My first template rule</title>
</head>
<body>
<table border="1">
<tr><th colspan="9" bgcolor="orange">Attestation List</th></tr>
<tr bgcolor="lightyellow">
<th>Student</th>
<th bgcolor="#87CEFA">English</th>
<th bgcolor="#87CEFA">ALBCS</th>
<th bgcolor="#87CEFA">Maths</th>
<th bgcolor="#87CEFA">BPE</th>
<th bgcolor="#87CEFA">BAP</th>
<th bgcolor="#87CEFA">Grammar</th>
<th bgcolor="#87CEFA">PE</th>
<th bgcolor="#87CEFA">CLM</th>
</tr>
<xsl:for-each select="FACULTY/SPECIALIZATION">
<xsl:sort select="Student"/>
<tr>
<td bgcolor="#EEAEEE"><xsl:value-of select="Student"/></td>
<xsl:choose>
<xsl:when test="English &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="English"/></td>
</xsl:when>
<xsl:when test="English &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="English"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="English"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="ALBCS &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="ALBCS"/></td>
</xsl:when>
<xsl:when test="ALBCS &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="ALBCS"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="ALBCS"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="Maths &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="Maths"/></td>
</xsl:when>
<xsl:when test="Maths &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="Maths"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="Maths"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="BPE &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="BPE"/></td>
</xsl:when>
<xsl:when test="BPE &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="BPE"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="BPE"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="BAP &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="BAP"/></td>
</xsl:when>
<xsl:when test="BAP &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="BAP"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="BAP"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="Grammar &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="Grammar"/></td>
</xsl:when>
<xsl:when test="Grammar &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="Grammar"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="Grammar"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="PE &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="PE"/></td>
</xsl:when>
<xsl:when test="PE &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="PE"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="PE"/></td>
</xsl:otherwise>
</xsl:choose>
<xsl:choose>
<xsl:when test="CLM &gt;'8'">
<td bgcolor="#98FB98">
<xsl:value-of select="CLM"/></td>
</xsl:when>
<xsl:when test="CLM &lt;'4'">
<td bgcolor="#FA8072">
<xsl:value-of select="CLM"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="CLM"/></td>
</xsl:otherwise>
</xsl:choose>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>