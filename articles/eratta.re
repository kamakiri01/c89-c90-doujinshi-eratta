=== Effective 量子コンピュータ

== 初版 -> 第二版

第2章の全面書き直し

　

@<em>{P.10}

 * （誤） @<m>{I U U^{\dag\}_{n-1\} = V W V^{\dag\} W^{\dag\}}
 * （正） @<m>{I \fallingdotseq U U^{\dag\}_{n-1\} = V W V^{\dag\} W^{\dag\}}

@<em>{P.12}

 * （誤） @<m<{U_{n-1\}}はノルムを得る性質から除外できます。この誤差を評価するために、@<m<{V_{n-1\},W_{n-1\}}の
 * （正） @<m>{U_{n-1\}}はノルムを得る性質から除外できます。この誤差を評価するために、@<m>{V_{n-1\},W_{n-1\}}の

@<em>{P.13}

 * （誤） 最も大きなleading orderはオーダースケール@<m>{ \varepsilon^{ \sqrt{ 3\}{ 2\} \} }の@<m>{ 8 (\delta \Delta)  }
 * （正） 最も大きなleading orderはオーダースケール@<m>{ \varepsilon^{ \frac{ 3\}{ 2\} \} }の@<m>{ 8 (\delta \Delta)  }

 * （誤）
//texequation{
	\begin{split}
		|| u - u_n || &\leq c' (\varepsilon_{n-1} )^{\frac{3}{2} } \varepsilon' \\
		 &\approx 8c
	\end{split}
//}

 * （正）
//texequation{
	\begin{split}
		|| u - u_n || &\leq c' (\varepsilon_{n-1} )^{\frac{3}{2} } \\
		\varepsilon' &\approx 8c
	\end{split}
//}

 * （誤）@<m>{cos\frac{\theta\}{8\} = {cos\}}^2 \frac{\theta\}{8\}} を満たす@<m>{\theta}角、
 * （正）@<m>{cos\frac{\theta\}{8\} = {cos\}^2 \frac{\theta\}{8\}} を満たす@<m>{\theta}角、

@<em>{P.15}

 * （誤）2つの積における固有値は@<m>{e^{i\lambda\}}}となります。
 * （正）2つの積における固有値は@<m>{e^{i\lambda\}}となります。

@<em>{P.16}

 * （誤）@<m>{ \lambda }は入力されるUの固有状態、その固有値@<m>{e^{i2 \lambda \} }は次のようになります。
 * （正）@<m>{ \lambda }は入力されるUの固有状態、その固有値@<m>{e^{i2 \pi \lambda \} }は次のようになります。

@<em>{P.19}

 * （誤）なぜなら、@<m>{U^{2n-1\}}は、@<m>{2^n}回の作用が必要です。
 * （正）なぜなら、@<m>{U^{2^{n-1\}\}}は、@<m>{2^n}回の作用が必要です。

@<em>{P.38}

 * （誤）@<m>{P_n = { \pm 1, i \} \times { I, X, Y, Z \} ^{\otimes n\}}
 * （正）@<m>{P_n = { \pm 1, \pm i \} \times { I, X, Y, Z \} ^{\otimes n\}}

 * （誤）P_2 = @<m>{{ \pm 1, i \} \times { II, IX, IY, IZ, XI, XX, XY, XZ, YI,YX, YY, YZ, ZI, ZX, ZY, ZZ \}}
 * （正）P_2 = @<m>{{ \pm 1, \pm i \} \times { II, IX, IY, IZ, XI, XX, XY, XZ, YI,YX, YY, YZ, ZI, ZX, ZY, ZZ \}}

@<em>{P.54}

 * （誤）@<m>{\left|\psi \right> = \frac{1\}{2\} ( \left|0\right> + e^{ \frac{\pi\}{4\} i \}\left|1\right> )}
 * （正）@<m>{\left|\psi \right> = \frac{1\}{\sqrt{2\}\} ( \left|0\right> + e^{ \frac{\pi\}{4\} i \}\left|1\right> )}

@<em>{P.70}

 * （誤）@<m>{\left( \frac{ Y + Z \}{2\} \right) e^{- \frac{ \pi \}{ 8 \} iZ\} \left|+ \right> = e^{- \frac{ \pi \}{ 8 \} iY\} \left| + \right> = \left| \frac{ \pi \}{8\} \right>}
 * （正）@<m>{\left( \frac{ Y + Z \}{\sqrt{2\}\} \right) e^{- \frac{ \pi \}{ 8 \} iZ\} \left|+ \right> = e^{- \frac{ \pi \}{ 8 \} iY\} \left| + \right> = \left| \frac{ \pi \}{8\} \right>}

=== 量子コンピュータ手習い

== 初版 -> 第二版

@<em>{P.9}

 * （誤）XX = YY = ZZ I
 * （正）XX = YY = ZZ = I

@<em>{P.25}

 * （誤）@<m>{P_i \neq P^{\dag\}_{i\}}
 * （正）@<m>{P P^\dag \neq I}

== 第二版 -> 第三版

=== 量子計算器事始め

@<em>{P.22}

 * （誤）この行列は、量子ビットの@<m>{\left|0\right>の位相を}@<m>{\frac{\theta\}{2\}}逆向きに回し、@<m>{\left|0\right>の位相を}@<m>{\frac{\theta\}{2\}}順向きに回しています。
 * （正）この行列は、量子ビットの@<m>{\left|0\right>の位相を}@<m>{\frac{\theta\}{2\}}逆向きに回し、@<m>{\left|1\right>の位相を}@<m>{\frac{\theta\}{2\}}順向きに回しています。
