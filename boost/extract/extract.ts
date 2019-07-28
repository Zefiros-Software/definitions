function isWindows() {
    return platform.os === "win32"
}

const b2 = isWindows() ? 'b2.exe' : './b2'
const bootstrap = isWindows() ? 'bootstrap.bat' : 'bash bootstrap.sh'
const bcp = isWindows() ? 'dist/bin/bcp.exe' : 'dist/bin/bcp'


export async function extract() {
    if (version.settings.modules && version.settings.modules.length > 0) {
        await shell.exec(`${bcp} ${version.settings.modules.join(' ')} ${version.target}`)
    }
}

export async function checkout() {
    await git.checkout(version.hash!)
    if (!fs.exists(b2)) {        
        await shell.exec(bootstrap)
    }
    
    if (!fs.exists(bcp)) {       
        await shell.exec(`${b2} -j 12 tools/bcp`)
    }

    if (!fs.exists('boost')) {       
        await shell.exec(`${b2} headers -j 12`)
    }
}
