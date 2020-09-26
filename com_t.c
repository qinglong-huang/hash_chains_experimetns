#include <stdio.h>
#include <math.h>

int main() {
    double a[] = {3742.0859571929172, 100071.22669313567, 269112.98155474034, 325331.14158572623, 349195.27442255506, 363843.5129772121, 386049.544243083, 396848.820516166, 423842.01875861565, 424957.42207280395, 468097.8846378658, 630361.4100278805, 659201.2607740304, 700446.7843385304, 877970.6748089674, 924753.6024767493, 968980.2253819357, 1395363.4292625054, 1440158.0565352868, 1479017.2136013526, 1828146.8330056423, 1890007.5856724568, 1975773.6251473299, 1982543.7674274489, 2112601.3226216426, 2278343.0664551277, 2327258.114744444, 2329252.8270602133, 2346293.356891183, 2387155.5241579646, 2450917.8909464297, 2605033.5338440146, 2666721.2639372707, 2675166.630638286, 2758465.2806403404, 2926459.3600468347, 3025715.7696481165, 3039759.8553119437, 3047403.3802253017, 3100325.8841283484, 3115819.0126820817, 3128338.0751652657, 3280191.2068399326, 3291856.792113251, 3456722.5215328666, 3593560.170874551, 3699238.9648454227, 3775415.479484617, 3938810.168886145, 3999062.7278585806, 4164889.342377624, 4283142.659356915, 4313005.703728138, 4484238.629428023, 4546120.450536347, 4707834.324927752, 4747928.709717654, 4773111.220784764, 4796678.420983048, 4988085.688023895, 5015551.638901942, 5019282.65383952, 5232618.214250876, 5308092.963383915, 5405339.691840865, 5634024.022805168, 5671955.4963750085, 5717096.928623199, 5917394.81959397, 5978562.129669017, 6129930.762880307, 6164062.921416296, 6199098.338366643, 6342640.958852051, 6395724.099875689, 6423509.755676377, 6566997.428341377, 6754896.464151356, 6756926.378968608, 6770315.146155091, 6846730.812304164, 6876208.244919863, 6956370.216839544, 6999405.376631508, 7041478.551525431, 7095101.412861547, 7123087.43451278, 7162804.580995303, 7276286.608441096, 7308019.474202078, 7340578.100404825, 7568837.57049536, 7612079.816139812, 7615611.98690576, 7743972.23353933, 7928527.023578583, 8011579.328596071, 8040979.3104067175, 8143258.682338143, 8190577.17109421, 8223982.7771349065, 8235613.2731531225, 8261865.706363399, 8370801.605491162, 8473529.692295583, 8733397.17083916, 8827191.920075253, 8943688.783331385, 9115817.583916625, 9224132.073898053, 9298357.0370303, 9304853.108407438, 9318261.99774641, 9660258.639550291, 9798516.74153205, 9896707.103129057, 10156558.970605839, 10267266.846966667, 10366736.095869128, 10367065.42496859, 10405542.821083765, 10443974.19387022, 10502826.537941666, 10652152.624694636, 10681678.112019155, 10688266.620224748, 10747657.392521683, 10791162.28340326, 10804258.83082398, 10828358.424808964, 11049341.42662661, 11140323.714650696, 11516643.112015594, 11527205.248740578, 11662746.584736137, 11744711.410115339, 11790106.06286672, 11954715.800488088, 11979374.777114032, 12028008.17527793, 12043441.075616468, 12043876.429406831, 12094028.67510786, 12188384.725293577, 12194653.665374784, 12263444.185744682, 12293774.971998245, 12346346.59689447, 12365488.063573549, 12433073.730796691, 12441994.24183882, 12457054.884023812, 12661013.712971814, 12667307.054799166, 12909475.726221485, 13178845.78083398, 13292193.433427695, 13612375.443768991, 13627308.717973756, 13732906.87631157, 13747047.794630226, 13840534.875036716, 13864322.377042603, 13878174.451227078, 13943097.26906414, 13971929.04608159, 14048080.003322922, 14411500.178504568, 14429922.43233926, 14589717.538788324, 14716631.100917375, 14748362.706194576, 14836639.875845667, 14860608.087908791, 14863212.75116922, 14867554.825420203, 14906018.665443044, 14956550.06933288, 14982623.44205301, 15116434.077903576, 15159021.403154429, 15160160.157202771, 15333452.478830902, 15460116.463242203, 15489966.659237694, 15508396.365406973, 15529841.994370688, 15560876.408249108, 15574867.269597866, 15665956.25811192, 15683034.682167728, 15800825.823703036, 15862903.726642512, 15904473.368426977, 16008735.325872868, 16051557.497968677, 16221024.346425807, 16491684.432166163, 16568327.664161215, 16647641.538646623, 16779825.432872523, 16831630.61862205, 16875735.965063732, 16875810.21194786, 16877454.91959177, 16919010.092019957, 17079773.242995694, 17120276.24876265, 17165434.065735184, 17213141.277357455, 17482519.933014233, 17530988.790133633, 17645591.862174697, 18006123.342992373, 18094021.505963597, 18131798.57223127, 18215789.080053966, 18245926.445141967, 18294703.536749285, 18382538.75757111, 18603676.559788298, 19001894.296337675, 19021063.174239047, 19123878.850152444, 19135721.4085186, 19163218.048524134, 19299182.205840178, 19330859.269079708, 19413660.185000736, 19461407.527602, 19494823.554166302, 19496445.993374143, 19549067.43453176, 19633036.08729282, 19669541.275985103, 19674560.70758367, 19705471.16397266, 19715445.86105311, 19944374.73457541, 20040406.18248808, 20140144.55624973, 20573325.107960176, 20584534.86403, 20704451.822711624, 20919557.271304056, 20926375.05003551, 21006978.55174487, 21100630.815461412, 21244478.835773304, 21311104.747489296, 21373112.712275643, 21378552.317795515, 21648383.526717667, 21665415.834000252, 21888738.347451277, 21900877.84698328, 21960567.877453342, 22010346.224733762, 22137132.214418367, 22154420.820723835, 22176542.40217201, 22184193.49369043, 22194103.483516067, 22264967.6982992, 22683692.22958899, 22728442.74162929, 22756581.386735618, 22887208.504887126, 23018498.569370206, 23061306.016447645, 23064662.095372144, 23199188.260462236, 23211919.53760147, 23237012.595887106, 23330504.19000496, 23385556.28269581, 23409430.608775847, 23409495.953897495, 23694131.67244489, 23949685.53542968, 23985565.137933347, 24106633.8224855, 24200180.47331394, 24317656.457086932, 24434503.637496427, 24593247.05441154, 24875330.159903638, 25171785.008726414, 25323035.625275895, 25383726.40297967, 25558837.913854323, 25569538.639087375, 25571220.867383037, 25577608.76585724, 25736714.290183786, 25840408.002895817, 26052139.514084097, 26075030.860974014, 26204138.091045946, 26255503.7510489, 26475594.41492114, 26622425.357226573, 26680892.480079047, 26714458.00746032, 26838940.68630385, 26881135.805608094, 27248161.91628605, 27337219.853904836, 27365228.4507516, 27496999.128428765, 27521657.267018598, 27534410.7627921, 27600823.720187653, 27880624.296896942, 28039476.37278165, 28076555.798137426, 28265911.014858667, 28313093.161008112, 28318212.927498486, 28413000.347383447, 28519090.55564031, 28762236.211517654, 28779639.28808828, 28848744.02333625, 28990406.613420412, 29035911.506615616, 29253629.948909484, 29305874.70737817, 29455121.138049744, 29524830.715127956, 29568457.780920275, 29804316.944613274, 29939976.60806033, 29956001.482234493, 30173671.5169193, 30268464.36085184, 30505833.808663677, 30506977.749322504, 30521475.831565123, 30630355.158394214, 30685014.485871512, 30697176.831593987, 30852116.467896033, 30864551.40591996, 30907627.892042525, 30913696.606018223, 31326143.90534855};
    int chain_len = 1050000;
    int chain_loc[347];

    int i;
    for (i = 0; i < 347; i++) {
        chain_loc[i] = chain_len - ceil(a[i]/30);
        printf("%d, ", chain_loc[i]);
    }
}