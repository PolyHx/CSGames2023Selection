export namespace ArrayUtils {
    export function joinIfDefined(array: number[], join = " "): string {
        return array.filter(val => val).join(join);
    }
}

export namespace DateUtils {

    /**
     * Cette fonctionne retourne une date en format UTC avec toutes les valeurs après le jours à zéro
     * @param date: Je me demande c'est quoi
     */
    export function getUtcDateOnly(date: Date | string): Date;
    export function getUtcDateOnly(year: number, month: number, date: number): Date;
    export function getUtcDateOnly(...args: any[]): Date {
        if (args.length === 1) {
            const [data] = args as [Date | string];
            const date = new Date(data);
            return new Date(Date.UTC(date.getFullYear(), date.getMonth(), date.getDate()));
        }

        const [year, month, date] = args as [number, number, number];
        return new Date(Date.UTC(year, month, date));
    }
}

declare global {
    interface Array<T> {
        sum<T>(digits?: number): number;
        toSentence<T>();
    }
}

Array.prototype.sum = function(digits = 2) {
    return this.reduce((a, b) => a + b, 0).toFixed(digits);
};

Array.prototype.toSentence = function() {
    return this.join(" ");
}
