<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:template match="/">
		<html>
			<head>
				<title>30-30 Apex</title>
			</head>
			<body>
				<table border="1">
						<tr>
							<td>
								Name
							</td>
							<td>
								Damage
							</td>
							<td>
								Recoil
							</td>
							<td>
								Number of bullets
							</td>
						</tr>
					<xsl:for-each select="main/weapon">
						<xsl:sort select="name"/>
						<tr>
							<td>
								<xsl:value-of select="name"></xsl:value-of>
							</td>
							<td>
								<xsl:value-of select="dam"></xsl:value-of>
							</td>
							<td>
								<xsl:value-of select="rec"></xsl:value-of>
							</td>
							<td>
								<xsl:value-of select="num"></xsl:value-of>
							</td>
						</tr>
					</xsl:for-each>
				</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>